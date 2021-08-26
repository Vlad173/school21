/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_messages.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 23:31:35 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/22 20:46:39 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_error(int error)
{
	if (error == DICT_ERROR)
		write(2, "Dict Error\n", 11);
	else if (error == ERROR)
		write(2, "Error\n", 6);
}

void	num_to_lets_values(char *number, t_elem **arr,
		t_list **list, int values[2])
{
	if ((values[1] - values[0] - 1) % 3 == 2 && number[values[0]] != '0')
	{
		ft_list_push_back(list, arr[0][number[values[0]] - '0'].value);
		ft_list_push_back(list, arr[3][0].value);
	}
	else if ((values[1] - values[0] - 1) % 3 == 1)
	{
		if (number[values[0]] == '1')
		{
			ft_list_push_back(list, arr[1][number[values[0] + 1] - '0'].value);
		}
		else if (number[values[0]] >= '2' && number[values[0]] <= '9')
			ft_list_push_back(list, arr[2][number[values[0]] - '0' - 2].value);
	}
	else if ((values[1] - values[0] - 1) % 3 == 0)
	{
		if (number[values[0]] != '0' && number[values[0] - 1] != '1')
			ft_list_push_back(list, arr[0][number[values[0]] - '0'].value);
		if (values[0] != values[1] - 1)
			ft_list_push_back(list, arr[3][(values[1] - \
			values[0] - 1) / 3].value);
	}
}

void	num_to_lets(char *number, t_elem **arr)
{
	t_list	*list;
	int		values[2];

	list = NULL;
	values[1] = ft_strlen(number);
	values[0] = 0;
	if (number[0] == '0' && values[1] == 1)
		ft_list_push_back(&list, arr[0][0].value);
	while (values[0] < values[1])
	{
		if ((values[1] - values[0] - 1) % 3 == 2 && number[values[0]] == '0'
			&& number[values[0] + 1] == '0' && number[values[0] + 2] == '0')
		{
			values[0] = values[0] + 3;
			continue ;
		}
		else
			num_to_lets_values(number, arr, &list, values);
		++values[0];
	}
	print_list(list);
	ft_list_clear(list);
}
