/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:33:00 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/22 20:43:14 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	replace_colon(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ':')
			str[i] = '\n';
		++i;
	}
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		++count;
	return (count);
}
