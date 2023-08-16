/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:03:21 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/16 09:29:36 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

int	ft_isprint(int c)
{
	return (' ' <= c && c <= '~');
}

// int main()
// {
// 	int c = 0;
//	
// 	for ( ; c<128; c++)
// 	{
// 		if (isprint(c) == ft_isprint(c))
// 			printf ("%c %d %d\n", c, isprint(c), ft_isprint(c));
// 		else
// 		{
// 			puts("faulse");
// 			return (-1);
// 		}
// 	}
// 	puts("ture");
// 	return (0);
// }
