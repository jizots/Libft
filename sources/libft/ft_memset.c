/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:04:40 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/16 09:29:44 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	char			*dest;
	size_t			i;

	uc = (unsigned char) c;
	dest = (char *) b;
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = uc;
		i++;
	}
	return (b);
}

// int main()
// {
//     char    str1[]="10293jfoefjo";
//     char    str2[]="10293jfoefjo";
// 	int i=8;

//     printf("%s\n", memset(str1, 65, i));
//     printf("%s\n", ft_memset(str2, 65, i));
// }
