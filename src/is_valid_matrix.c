/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:17:43 by hotph             #+#    #+#             */
/*   Updated: 2023/09/10 18:18:50 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft_utils.h"

bool	is_valid_matrix(int num_of_row, char *matrix[], void *f(char *))
{
	int	i;

	i = 1;
	while (i < num_of_row)
	{
		if ((f)(matrix[i]) != 0)
			return (false);
		i++;
	}
	return (true);
}
