/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:38:43 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/22 20:53:42 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	check_number(int argc, char *argv[])
{
	int	count;

	if (argc == 2)
	{
		if (!ft_strlen_and_check(argv[1], &count))
		{
			print_error(ERROR);
			return (0);
		}
	}
	if (argc == 3)
	{
		if (!ft_strlen_and_check(argv[2], &count))
		{
			print_error(ERROR);
			return (0);
		}
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_elem	**arr;

	arr = init_dictionary();
	if (argc != 2 && argc != 3)
	{
		print_error(ERROR);
		return (0);
	}
	if (!check_number(argc, argv))
		return (0);
	if (argc == 2)
	{
		if (!parse_file("numbers.dict", arr))
			print_error(DICT_ERROR);
		else
			num_to_lets(argv[1], arr);
	}
	else if (argc == 3)
	{
		if (!parse_file(argv[1], arr))
			print_error(DICT_ERROR);
		else
			num_to_lets(argv[2], arr);
	}
	free_dictionary(arr);
	return (0);
}
