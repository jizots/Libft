/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_trgb_color.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:05:32 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:38:44 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

int	create_trgb_color(unsigned char t, unsigned char r,
					unsigned char g, unsigned char b)
{
	return (*(int *)(unsigned char [4]){b, g, r, t});
}
