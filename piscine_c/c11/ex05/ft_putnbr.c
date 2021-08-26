/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:55:09 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 17:37:42 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long long ll)
{
	int			i;
	char		length[32];

	i = 0;
	if (ll == 0)
		ft_putchar('0');
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
	while (i)
		ft_putchar(length[--i]);
	write(1, "\n", 1);
}
