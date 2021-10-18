/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:38:08 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/10/13 15:34:59 by vladislov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;

	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	while (n != 0)
	{
		--n;
		to[n] = from[n];
	}
	return (dst);
}
