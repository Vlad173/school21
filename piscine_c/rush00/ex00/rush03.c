/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:40:36 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/08 15:49:36 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int x, char begin, char middle, char end)
{
	int	width;

	width = x;
	while (width)
	{
		if (width == x)
			ft_putchar(begin);
		else if (width > 1)
			ft_putchar(middle);
		else if (width == 1)
			ft_putchar(end);
		--width;
	}
}

void	rush(int x, int y)
{
	int	length;

	length = y;
	while (length)
	{
		if (length == y)
			ft_print_line(x, 'A', 'B', 'C');
		else if (length > 1)
			ft_print_line(x, 'B', ' ', 'B');
		else if (length == 1)
			ft_print_line(x, 'A', 'B', 'C');
		ft_putchar('\n');
		--length;
	}
}
