/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:25:28 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 21:15:33 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = (int *) malloc(sizeof(int) * length);
	if (result == NULL)
		return (NULL);
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		++i;
	}
	return (result);
}
