/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladislove <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:49:56 by vladislov         #+#    #+#             */
/*   Updated: 2021/10/14 01:24:18 by vladislov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			dstsize;

	i = ft_strlen(dest);
	dstsize = i;
	j = 0;
	if (!src || !dest)
		return (ft_strlen(dest) + ft_strlen(src));
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	while (src[j])
		++j;
	return (dstsize + j);
}
