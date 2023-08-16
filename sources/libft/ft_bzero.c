/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:02:04 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/16 09:32:52 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int main()
// {
//     char    str1[]="10293jfoefjo";
//     char    str2[]="10293jfoefjo";
// 	int i=8;
// 	int j= 0;

// 	bzero(str1, i);
// 	ft_bzero(str2, i);
// 	for ( ; j < 12; j++)
//     	printf("%c %c\n",str1[j], str2[j]);
// }
