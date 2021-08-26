/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:42:27 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/14 23:32:14 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_putnbr(int nbr)
{
	char		length[11];
	int			i;
	long long	ll;

	i = 0;
	ll = nbr;
	if (ll < 0)
	{
		ll *= -1;
		ft_putchar('-');
	}
	while (ll)
	{
		length[i++] = ll % 10 + '0';
		ll /= 10;
	}
	if (nbr == 0)
		ft_putchar('0');
	while (i)
		ft_putchar(length[--i]);
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		++i;
	}
}
