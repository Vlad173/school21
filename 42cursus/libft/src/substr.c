/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladislove <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:13:33 by vladislov         #+#    #+#             */
/*   Updated: 2021/10/18 22:23:14 by vladislov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t			ft_strlen(const char *str);

static size_t	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	size_t			size;
	unsigned int	i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size - 1)
		return (NULL);
	len = ft_min(len, size - start);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (len--)
		result[i++] = s[start++];
	result[i] = 0;
	return (result);
}
