/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:16:24 by sahamzao          #+#    #+#             */
/*   Updated: 2023/12/27 22:12:54 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenagt(long long oi)
{
	int	count;

	count = 0;
	if (oi < 0)
		count++;
	if (oi < 0)
		oi = -oi;
	if (oi == 0)
		return (1);
	while (oi > 0)
	{
		oi = oi / 10;
		count++;
	}
	return (count);
}

static char	*ft_cpy(long long on, char *ptr, int stop, int len)
{
	int	i;

	i = len - 1;
	while (i >= stop)
	{
		ptr[i] = (on % 10) + 48;
		on = on / 10;
		i--;
	}
	ptr[len] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			len;
	long long	on;
	int			stop;

	stop = 0;
	on = (long long)n;
	len = ft_lenagt(on);
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	if (on < 0)
	{
		ptr[0] = '-';
		on *= -1;
		stop = 1;
	}
	ptr = ft_cpy(on, ptr, stop, len);
	return (ptr);
}
