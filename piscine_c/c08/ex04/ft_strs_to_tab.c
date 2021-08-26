/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:18:31 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/14 23:28:35 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		++count;
	return (count);
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

void	init_stock(t_stock_str *str_struc, int size, char *str)
{
	str_struc->size = size;
	str_struc->str = str;
	if (str == NULL)
		str_struc->copy = NULL;
	else
		str_struc->copy = ft_strdup(str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	if (ac < 0)
		return (NULL);
	i = 0;
	res = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (res == NULL)
		return (NULL);
	init_stock(res + ac, 0, NULL);
	while (i < ac)
	{
		init_stock(res + i, ft_strlen(av[i]), av[i]);
		++i;
	}
	return (res);
}
