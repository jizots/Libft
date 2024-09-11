/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:05:44 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:39:28 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	if (dest == NULL || src == NULL)
		return (dest);
	ft_memcpy((void *)dest, (const void *)src, ft_strlen(src) + 1);
	return (dest);
}

// int main()
// {
//     char    str1[]="10293jfoefjo";
//     char    str2[30];

//    	printf("%s\n",ft_strcpy(str2, str1));
//    	printf("%s\n",strcpy(str2, str1));
// }
