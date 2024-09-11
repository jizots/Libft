/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:05:32 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:39:16 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (NULL);
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}

// int main(void)
// {
//     char str[] = "woi;egjvn;iejfaener32r4";
//     char c = 'w'; // check \0

//     printf("std %s\nmy  %s", strchr(str, c + 256), ft_strchr(str, c + 256));
//     return (0);
// }
