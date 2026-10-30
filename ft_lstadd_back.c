/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmohda <khmohda@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:55:14 by khmohda           #+#    #+#             */
/*   Updated: 2026/10/22 11:55:16 by khmohda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = NULL;
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		(*lst) = new;
		return ;
	}
	node = *lst;
	while (node->next)
	{
		node = node->next;
	}
	node->next = new;
}
