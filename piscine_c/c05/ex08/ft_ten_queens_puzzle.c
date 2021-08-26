/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:36:03 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/15 13:40:38 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_result(int *result)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = result[i] + '0';
		write(1, &c, 1);
		++i;
	}
	write(1, "\n", 1);
}

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

int	check_positions(int *result, int number_of_queens, int row)
{
	int	i;

	i = 0;
	while (i < number_of_queens)
	{
		if (result[i] == row)
			return (0);
		if (ft_abs(result[i] - row) == ft_abs(i - number_of_queens))
			return (0);
		++i;
	}
	return (1);
}

void	ft_ten_queens_rec(int number_of_queens, int *result, int *count)
{
	int	j;

	j = 0;
	while (j < 10)
	{	
		if (check_positions(result, number_of_queens, j))
		{
			result[number_of_queens] = j;
			if (number_of_queens == 9)
			{
				write_result(result);
				++*count;
			}
			else
				ft_ten_queens_rec(number_of_queens + 1, result, count);
		}
		++j;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	count;
	int	result[10];

	count = 0;
	ft_ten_queens_rec(0, result, &count);
	return (count);
}
