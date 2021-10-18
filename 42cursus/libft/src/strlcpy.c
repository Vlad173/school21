/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:52:06 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/10/17 02:33:17 by vladislov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src[i])
		++i;
	return (i);
}
