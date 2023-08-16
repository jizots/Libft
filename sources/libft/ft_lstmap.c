/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:17:08 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/16 09:29:41 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*root;

	if (lst == NULL || *f == NULL || del == NULL || f == NULL)
		return (NULL);
	root = NULL;
	newlist = ft_lstnew((*f)(lst->content));
	if (newlist == NULL)
		return (NULL);
	root = newlist;
	lst = lst->next;
	while (lst != NULL)
	{
		newlist = ft_lstnew((*f)(lst->content));
		if (newlist == NULL)
		{
			ft_lstclear(&root, del);
			return (NULL);
		}
		ft_lstadd_back(&root, newlist);
		lst = lst->next;
	}
	return (root);
}
