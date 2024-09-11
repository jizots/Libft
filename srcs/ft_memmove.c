/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:04:28 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:39:08 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_char;
	unsigned char	*src_char;
	size_t			i;

	if (src == NULL)
		return (NULL);
	dest_char = (unsigned char *) dest;
	src_char = (unsigned char *) src;
	i = 0;
	if ((dest_char - src_char) <= 0)
		ft_memcpy(dest, src, n);
	else
	{
		while (i < n)
		{
			dest_char[n - 1 - i] = src_char[n - 1 - i];
			i++;
		}
	}
	return (dest);
}
