/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_string_composedof.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:25:33 by hotph             #+#    #+#             */
/*   Updated: 2024/09/11 21:39:28 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

bool	is_string_composedof(const char *str, const char *charset)
{
	int	i;

	i = 0;
	if (str == NULL || charset == NULL)
		return (false);
	while (str[i])
	{
		if (ft_strchr(charset, str[i]) == NULL)
			return (false);
		i++;
	}
	return (true);
}
