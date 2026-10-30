/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmohda <khmohda@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:24:08 by khmohda           #+#    #+#             */
/*   Updated: 2026/10/24 11:24:10 by khmohda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*node;
	t_list	*lnew;
	t_list	*index;

	content = NULL;
	node = NULL;
	lnew = NULL;
	index = lst;
	if (!lst || !f || !del)
		return (NULL);
	while (index)
	{
		content = f(index->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&lnew, del);
			return (NULL);
		}
		ft_lstadd_back(&lnew, node);
		index = index->next;
	}
	return (lnew);
}
