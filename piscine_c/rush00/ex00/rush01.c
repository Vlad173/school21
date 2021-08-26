/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:20:08 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/12 13:53:43 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while (length != 0)
	{
		if (length == y)
			ft_print_line(x, '/', '*', '\\');
		else if (length > 1)
			ft_print_line(x, '*', ' ', '*');
		else if (length == 1)
			ft_print_line(x, '\\', '*', '/');
		ft_putchar('\n');
		--length;
	}
}
