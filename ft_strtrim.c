/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:00:11 by sahamzao          #+#    #+#             */
/*   Updated: 2023/12/25 00:06:34 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_left(char const *s1, char const *set)
{
	int	start;
	int	j;

	start = 0;
	j = 0;
	while (set[j] && s1[start])
	{
		if (s1[start] == set[j])
		{
			start++;
			j = 0;
		}
		else
			j++;
	}
	return (start);
}

static int	ft_right(char *s1, char const *set, int len)
{
	int	j;

	j = 0;
	while (len > 0 && set[j])
	{
		if (set[j] == s1[len - 1])
		{
			len--;
			j = 0;
		}
		else
			j++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	int		start;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	ptr = (char *)s1;
	len = ft_strlen(s1);
	start = ft_left(ptr, set);
	len = ft_right(ptr, set, len);
	return (ft_substr(ptr, start, len - start));
}
