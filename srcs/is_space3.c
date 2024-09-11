/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_space3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:47:31 by hotph             #+#    #+#             */
/*   Updated: 2024/09/11 21:39:28 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

size_t	len_isspace3(const char *src)
{
	size_t	len;

	len = 0;
	while (src[len] == ' ' || src[len] == '\f' || src[len] == '\n'
		|| src[len] == '\r' || src[len] == '\t' || src[len] == '\v')
		len++;
	return (len);
}

bool	is_space3(const char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (true);
	return (false);
}
