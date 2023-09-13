/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotanaka <sotanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:17:43 by hotph             #+#    #+#             */
/*   Updated: 2023/09/13 18:47:18 by sotanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft_utils.h"

bool	is_valid_matrix(int num_of_row, char *matrix[], void *f(const char *))
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
