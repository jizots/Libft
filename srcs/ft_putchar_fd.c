/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:32:47 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:39:10 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (write (fd, &c, 1) == -1)
		write (STDERR_FILENO, "write error\n", 12);
}

// int main()
// {
// 	int fd;
// 	fd = open("inputfile", O_WRONLY);
// 	if (fd == -1)
// 		puts("error");
// 	ft_putchar_fd('4', fd);
// 	close(fd);
// }
