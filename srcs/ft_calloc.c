/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:02:25 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:38:47 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	if (size != 0 && ULONG_MAX / size < count)
		return (NULL);
	tmp = malloc (size * count);
	if (tmp == NULL)
		return (tmp);
	i = 0;
	while (i < size * count)
		tmp[i++] = 0;
	return ((void *) tmp);
}
