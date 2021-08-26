/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:09:29 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/25 16:37:18 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free_arr(int **arr, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		free(arr[i]);
		++i;
	}
	free(arr);
}

void	ft_free_map(t_map *map, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(map->matrix[i]);
		++i;
	}
	free(map->matrix);
}
