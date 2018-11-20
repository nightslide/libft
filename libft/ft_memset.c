/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igysella <igysella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:35:23 by igysella          #+#    #+#             */
/*   Updated: 2018/11/20 18:36:53 by igysella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	byte		byte_value;
	byte		*byte_ptr;
	size_t		i;

	byte_ptr = (byte*)b;
	byte_value = (byte)c;
	i = 0;
	while (i < len)
		byte_ptr[i++] = byte_value;
	return (b);
}
