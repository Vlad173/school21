/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladislove <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:29:34 by vladislov         #+#    #+#             */
/*   Updated: 2021/10/13 15:06:25 by vladislov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *s, const char *p, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!p || !(*p))
		return ((char *)s);
	while (s[i])
	{
		j = 0;
		while (p[j] == s[i + j])
		{
			if (p[j + 1] == '\0')
				return ((char *)s + i);
			++j;
			if (i + j == len)
				return (0);
		}
		++i;
	}
	return (0);
}
