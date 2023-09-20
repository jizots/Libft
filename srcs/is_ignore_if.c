/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ignore_if.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:23:28 by sotanaka          #+#    #+#             */
/*   Updated: 2023/09/19 13:14:53 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft_utils.h"

bool	is_ignore_if(void *data, bool (*condition)(void *))
{
	if (condition(data) == true)
		return (true);
	return (false);
}
