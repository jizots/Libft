/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:03:37 by sotanaka          #+#    #+#             */
/*   Updated: 2023/08/25 15:58:06 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft.h"

char	*ft_itoa_input(int n, char *dest, unsigned int digit_int)
{
	int64_t	nb;

	nb = (int64_t)n;
	if (nb == 0)
		ft_strcpy(dest, "0");
	else
	{
		if (nb < 0)
		{
			ft_strcpy(&dest[0], "-");
			nb = -nb;
		}
		while (nb)
		{
			dest[digit_int - 1] = (nb % 10) + '0';
			nb = nb / 10;
			digit_int--;
		}
	}
	dest[digit_int] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	unsigned int	digit_int;
	char			*str;

	digit_int = num_digit_int(n);
	str = malloc (sizeof(char) * digit_int + 1);
	if (str == NULL)
		return (NULL);
	return (ft_itoa_input(n, str, digit_int));
}

// int main()
// {
// printf("0:%s -2147483:%s -2147483648:%s 2147483647:%s", 
// 	ft_itoa(0), ft_itoa(-2147483), ft_itoa(-2147483648), ft_itoa(2147483647));
// }
