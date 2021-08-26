/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 19:36:30 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/07 22:46:13 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_print_hex(int a)
{
	char	c1;
	char	c2;

	c1 = a / 16 + '0';
	if (a % 16 > 9)
		c2 = (a % 16) + 'a' - 10;
	else
		c2 = (a % 16) + '0';
	write(1, "\\", 1);
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_printable(str[i]))
			write(1, str + i, 1);
		else
			ft_print_hex(str[i]);
		++i;
	}
}
