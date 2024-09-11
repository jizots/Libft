/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map_null_terminated.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:24:56 by hotph             #+#    #+#             */
/*   Updated: 2024/09/11 21:38:45 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

/*Free map of null terminated.*/
void	free_map_null_terminated(void ***map)
{
	size_t	i;

	if (*map == NULL)
		return ;
	i = 0;
	while ((*map)[i])
	{
		free((*map)[i]);
		i++;
	}
	free(*map);
	*map = NULL;
}
