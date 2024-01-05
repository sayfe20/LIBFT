/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahamzao <sahamzao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:11:13 by sahamzao          #+#    #+#             */
/*   Updated: 2023/12/28 01:23:11 by sahamzao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*ne;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		ne = curr->next;
		(*del)(curr->content);
		free(curr);
		curr = ne;
	}
	*lst = NULL;
}
