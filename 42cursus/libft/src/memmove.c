/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladislove <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 02:25:49 by vladislov         #+#    #+#             */
/*   Updated: 2021/10/13 15:35:57 by vladislov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;

	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	if (to > from)
	{
		from += len - 1;
		to += len - 1;
		while (len--)
			*to-- = *from--;
	}
	else
	{
		while (len--)
			*to++ = *from++;
	}
	return (dst);
}
