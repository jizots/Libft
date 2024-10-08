/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_null.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:12:52 by hotph             #+#    #+#             */
/*   Updated: 2024/09/11 21:38:46 by hotph            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_utils.h"

/*Free and set null.*/
void	free_null(void **ptr)
{
	free(*ptr);
	*ptr = NULL;
}
