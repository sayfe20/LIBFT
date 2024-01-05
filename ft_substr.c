/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:19:26 by sahamzao          #+#    #+#             */
/*   Updated: 2023/12/24 21:55:40 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			slen;
	char			*ptr;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen - start)
	{
		len = slen - start;
	}
	if (start > slen)
		len = 0;
	ptr = malloc(1 * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
