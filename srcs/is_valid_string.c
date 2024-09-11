/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:03:19 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:39:28 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

bool	is_valid_string(char *str, bool condition(char))
{
	int	i;

	i = 0;
	if (str == NULL || condition == NULL)
		return (false);
	while (str[i])
	{
		if (condition(str[i]) == false)
			return (false);
		i++;
	}
	return (true);
}
