/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_distance.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:51:43 by hotph             #+#    #+#             */
/*   Updated: 2023/09/29 16:35:55 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft_utils.h"

double	distance_of_point(t_point2d p1, t_point2d p2)
{
	return (sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
}

double	hypotenus_of_pytgrs(double adjacent, double opposite)
{
	return (sqrt(pow(adjacent, 2) + pow(opposite, 2)));
}
