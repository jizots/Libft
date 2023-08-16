/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:32:47 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/16 09:29:45 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
		write (fd, s++, 1);
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
