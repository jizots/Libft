/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:02:54 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/16 09:29:35 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// int main()
// {
// 	int c = 0;
//	
// 	for ( ; c<128; c++)
// 	{
// 		if (isascii(c) == ft_isascii(c))
// 			printf ("%c %d %d\n", c, isascii(c), ft_isascii(c));
// 		else
// 		{
// 			puts("faulse");
// 			return (-1);
// 		}
// 	}
// 	puts("ture");
// 	return (0);
// }
