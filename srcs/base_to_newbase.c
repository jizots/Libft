/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_to_newbase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:48:18 by hotph             #+#    #+#             */
/*   Updated: 2024/09/11 21:38:43 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

int	search_basenum(char c, char *base, int len_oldbase)
{
	int	i;

	i = 0;
	while (base[i] != c)
	{
		if (i == len_oldbase)
			return (-1);
		i++;
	}
	return (i);
}

void	input_array(int decimal, char *result, int hexlen, size_t reslen)
{
	char	c;

	if (decimal >= hexlen)
	{
		input_array(decimal / hexlen, result, hexlen, reslen - 1);
	}
	c = (decimal % hexlen) + '0';
	result[reslen - 1] = c;
}

char	*ft_input_baseto(int decimal, char *baseto, char *result)
{
	int		hexlen;
	size_t	reslen;
	int		temp_decimal;

	hexlen = ft_strlen(baseto);
	reslen = 0;
	temp_decimal = decimal;
	while (temp_decimal != 0)
	{
		reslen++;
		temp_decimal = temp_decimal / hexlen;
	}
	result = malloc(sizeof(char) * (reslen + 2));
	if (result == NULL)
		return (NULL);
	if (decimal < 0)
		;
	else
	{
		result[reslen] = '\0';
		input_array(decimal, result, hexlen, reslen);
	}
	return (result);
}

char	*base_to_newbase(char *num_oldbase, char *oldbase, char *newbase)
{
	int		len_num;
	int		len_oldbase;
	int		decimal;
	int		exponents;
	char	*result;

	result = NULL;
	if (is_string_composedof(num_oldbase, oldbase) == true)
	{
		len_num = ft_strlen(num_oldbase);
		len_oldbase = ft_strlen(oldbase);
		exponents = 0;
		decimal = 0;
		while (exponents < len_num)
		{
			decimal += power_num(len_oldbase, exponents)
				* search_basenum(num_oldbase[len_num - 1 - exponents],
					oldbase, len_oldbase);
			exponents++;
		}
		result = ft_input_baseto(decimal, newbase, result);
	}
	return (result);
}
