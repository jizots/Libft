/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:02:25 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/25 15:50:04 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	if (size != 0 && LONG_MAX / size < count)
		return (NULL);
	tmp = malloc (size * count);
	if (tmp == NULL)
		return (tmp);
	i = 0;
	while (i < size * count)
		tmp[i++] = 0;
	return ((void *) tmp);
}
