/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:16:19 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:39:01 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*delete;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	delete = *lst;
	while (delete != NULL)
	{
		next = delete->next;
		ft_lstdelone(delete, del);
		delete = next;
	}
	*lst = NULL;
}
