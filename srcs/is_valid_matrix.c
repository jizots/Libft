/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:17:43 by hotph             #+#    #+#             */
/*   Updated: 2024/09/11 21:39:28 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

bool	is_valid_matrix(int num_of_row, char *matrix[], bool (*f)(const char *))
{
	int	i;

	i = 1;
	while (i < num_of_row)
	{
		if ((f)(matrix[i]) == false)
			return (false);
		i++;
	}
	return (true);
}
