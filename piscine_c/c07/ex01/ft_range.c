/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:45:17 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/13 23:05:54 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	str = (int *) malloc(sizeof(int) * size);
	if (str == NULL)
		return (NULL);
	while (i < size)
		str[i++] = min++;
	return (str);
}
