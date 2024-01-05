/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:39:03 by sahamzao          #+#    #+#             */
/*   Updated: 2023/12/14 15:28:19 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			dstlen;
	size_t			srclen;
	size_t			tot_len;
	unsigned int	i;
	size_t			dl;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	tot_len = dstsize - dstlen - 1;
	i = 0;
	dl = dstlen;
	if (!src)
		return (0);
	if (!dst && dstsize == 0)
		return (srclen);
	if (dstsize <= dl)
		return (dstsize + srclen);
	while (i < tot_len && src[i])
	{
		dst[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return (dl + srclen);
}
