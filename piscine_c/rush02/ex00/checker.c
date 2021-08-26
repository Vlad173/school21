/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 23:11:55 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/22 20:47:04 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_zeros(char *str)
{
	while (*str)
	{
		if (*str != '0')
			return (0);
		++str;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (!s1[i] && !s2[i])
			break ;
		++i;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*str;

	length = ft_strlen(src);
	str = (char *) malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		str[i] = src[i];
		++i;
	}
	str[i] = 0;
	return (str);
}

int	ft_strlen_and_check(char *str, int *count)
{
	*count = 0;
	while (str[*count])
	{
		if (!(str[*count] >= '0' && str[*count] <= '9'))
			return (0);
		++(*count);
	}
	return (1);
}
