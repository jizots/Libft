/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:12:55 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/16 09:29:34 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

int	ft_isalpha(int c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

// int main()
// {
// 	int c = 0;	
// 	for ( ; c<128; c++)
// 	{
// 		if (isalpha(c) == ft_isalpha(c))
// 			printf ("%c %d %d\n", c, isalpha(c), ft_isalpha(c));
// 		else
// 		{
// 			puts("faulse");
// 			return (-1);
// 		}
// 	}
// 	puts("ture");
// 	return (0);
// }
