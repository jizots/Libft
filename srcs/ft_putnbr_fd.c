/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:32:47 by sotanaka          #+#    #+#             */
/*   Updated: 2024/09/11 21:39:13 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static void	putuint_fd(unsigned int n, int fd)
{
	if (n > 9)
		putuint_fd(n / 10, fd);
	n = (n % 10) + '0';
	ft_putchar_fd((char) n, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	temp;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		temp = (unsigned int) -n;
	}
	else
		temp = (unsigned int) n;
	putuint_fd(temp, fd);
}

// int main()
// {
// 	int fd = STDOUT_FILENO;
// 	ft_putnbr_fd(2147483647, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(2147483648, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(-123, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(101, fd);
// 	ft_putchar_fd('\n', fd);
// }