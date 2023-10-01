/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_which_direction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotanaka <sotanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:59:27 by sotanaka          #+#    #+#             */
/*   Updated: 2023/10/01 14:10:37 by sotanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft_utils.h"

bool	is_right_direction(double radian)
{
	if (radian < M_PI / 2 || 3 * (M_PI / 2) < radian)
		return (true);
	return (false);
}

bool	is_up_direction(double radian)
{
	if (0 < radian && radian < M_PI)
		return (true);
	return (false);
}

void	set_radian_within_2pi(double *radian)
{
	while (*radian < 0)
		*radian += 2 * M_PI;
	while (*radian >= 2 * M_PI)
		*radian -= 2 * M_PI;
}