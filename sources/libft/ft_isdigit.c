/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:03:08 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/16 09:29:36 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// int main()
// {
// 	int c = 0;
//	
// 	for ( ; c<128; c++)
// 	{
// 		if (isdigit(c) == ft_isdigit(c))
// 			printf ("%c %d %d\n", c, isdigit(c), ft_isdigit(c));
// 		else
// 		{
// 			puts("faulse");
// 			return (-1);
// 		}
// 	}
// 	puts("ture");
// 	return (0);
// }
