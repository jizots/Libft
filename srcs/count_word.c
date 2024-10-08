/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:47:29 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:38:44 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

size_t	count_word(const char *str)
{
	size_t	i;
	size_t	count;
	int		flag;

	if (str == NULL)
		return (0);
	i = 0;
	count = 0;
	flag = 1;
	while (str[i])
	{
		if (is_space3(str[i]) == false)
		{
			if (flag == 1)
				count++;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (count);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = " t fwe a	fe80 /. a \n";

// 	printf("%zu\n", count_word(str));
// }