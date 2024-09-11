/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:32:47 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:39:12 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main()
// {
// 	int fd;
// 	fd = open("inputfile", O_WRONLY);
// 	if (fd == -1)
// 		puts("error");
// 	ft_putendl_fd("42 Tokyo", fd);
// 	close(fd);
// }
