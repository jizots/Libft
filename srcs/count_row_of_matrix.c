/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_row_of_matrix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotanaka <sotanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:53:58 by sotanaka          #+#    #+#             */
/*   Updated: 2023/09/20 11:54:30 by sotanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft_utils.h"

size_t	count_row_of_matrix(char **matrix)
{
	size_t	i;

	if (matrix == NULL)
		return (0);
	i = 0;
	while (matrix[i])
		i++;
	return (i);
}