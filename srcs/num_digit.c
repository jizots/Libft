/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_digit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 18:17:44 by hotph             #+#    #+#             */
/*   Updated: 2024/09/11 21:39:28 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

int	num_digit_int(int num)
{
	int		count;
	int64_t	n;

	count = 0;
	if (num == 0)
		return (1);
	n = (int64_t)num;
	if (num < 0)
	{
		count++;
		n = -n;
	}
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
