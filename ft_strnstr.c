/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:16:31 by sahamzao          #+#    #+#             */
/*   Updated: 2023/12/14 16:26:09 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!need && !hay)
		return (NULL);
	if (need[0] == '\0')
		return ((char *)hay);
	if (!len)
		return (NULL);
	while (hay[i] != '\0' && i <= len)
	{
		j = 0;
		while (hay[i + j] == need[j] && hay[i + j] && need[j] && j + i < len)
		{
			if (need[j + 1] == '\0')
				return ((char *)&hay[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
