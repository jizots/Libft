/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:16:42 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:39:03 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst == NULL || f == NULL)
		return ;
	current = lst;
	while (current != NULL)
	{
		(*f)(current->content);
		current = current->next;
	}
}
