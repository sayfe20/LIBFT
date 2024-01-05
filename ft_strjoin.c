/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:58:37 by sahamzao          #+#    #+#             */
/*   Updated: 2023/12/19 14:59:25 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	size_t	tot;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	tot = ls1 + ls2 + 1;
	ptr = (char *)malloc(sizeof(char) * tot);
	if (!ptr)
		return (NULL);
	ft_memcpy((void *)(ptr), (const void *)s1, ls1);
	ft_memcpy((void *)(ptr + ls1), (const void *)s2, ls2);
	ptr[tot - 1] = '\0';
	return (ptr);
}
