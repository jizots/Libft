/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:05:32 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/18 17:39:23 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	if (s == NULL)
		return (NULL);
	cc = (char) c;
	while (*s)
	{
		if (*s == cc)
			return ((char *) s);
		s += 1;
	}
	if (cc == '\0')
		return ((char *) s);
	return (NULL);
}

// int main(void)
// {
//     char str[] = "woi;egjvn;iejfaener32r4";
//     char c = 'w'; // check \0

//     printf("std %s\nmy  %s", strchr(str, c + 256), ft_strchr(str, c + 256));
//     return (0);
// }
