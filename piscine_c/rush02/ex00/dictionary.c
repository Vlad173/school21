/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 23:50:00 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/22 20:42:42 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_elem	**init_dictionary(void)
{
	t_elem	**arr;
	int		j;

	arr = (t_elem **) malloc(sizeof(t_elem *) * 4);
	arr[0] = (t_elem *) malloc(sizeof(t_elem) * 10);
	j = 0;
	while (j < 10)
		arr[0][j++].value = NULL;
	arr[1] = (t_elem *) malloc(sizeof(t_elem) * 10);
	j = 0;
	while (j < 10)
		arr[1][j++].value = NULL;
	arr[2] = (t_elem *) malloc(sizeof(t_elem) * 8);
	j = 0;
	while (j < 8)
		arr[2][j++].value = NULL;
	arr[3] = (t_elem *) malloc(sizeof(t_elem) * 13);
	j = 0;
	while (j < 13)
		arr[3][j++].value = NULL;
	return (arr);
}

void	free_dictionary(t_elem **arr)
{
	int	j;

	j = 0;
	while (j < 10)
		free(arr[0][j++].value);
	free(arr[0]);
	j = 0;
	while (j < 10)
		free(arr[1][j++].value);
	free(arr[1]);
	j = 0;
	while (j < 8)
		free(arr[2][j++].value);
	free(arr[2]);
	j = 0;
	while (j < 13)
		free(arr[3][j++].value);
	free(arr[3]);
	free(arr);
}

int	init_entry(char *number, char *value, t_elem **arr)
{
	int	size;

	if (!ft_strlen_and_check(number, &size))
		return (0);
	if (size < 1 || size > 37)
		return (0);
	if (size == 1)
		arr[0][number[0] - '0'].value = ft_strdup(value);
	else if (size == 2)
	{
		if (number[0] == '1')
			arr[1][number[1] - '0'].value = ft_strdup(value);
		else if (number[1] == '0')
			arr[2][number[0] - '0' - 2].value = ft_strdup(value);
	}
	else if (!ft_strcmp(number, "100\0"))
		arr[3][0].value = ft_strdup(value);
	else if (!ft_strcmp(number, "1000\0"))
		arr[3][1].value = ft_strdup(value);
	else if (number[0] == '1' && !((size - 1) % 3) && check_zeros(number + 1))
		arr[3][(size - 1) / 3].value = ft_strdup(value);
	return (1);
}
