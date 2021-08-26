/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:58:41 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/05 20:24:01 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	my_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			my_write(a / 10 + '0');
			my_write(a % 10 + '0');
			my_write(' ');
			my_write(b / 10 + '0');
			my_write(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				my_write(',');
				my_write(' ');
			}
			++b;
		}
		++a;
	}
}
