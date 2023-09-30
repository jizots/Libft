/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   almost_equal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:01:12 by hotph             #+#    #+#             */
/*   Updated: 2023/09/30 11:04:37 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft_utils.h"

bool	almost_equal_double(double a, double b)
{
	double	epsilon;

	epsilon = 0.0000001;
	if (fabs(a - b) < epsilon)
		return (true);
	return (false);
}