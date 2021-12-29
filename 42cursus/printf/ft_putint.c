/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:44:29 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/12/27 23:54:48 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(const int n)
{
	long long	ll;
	char		length[10];
	int			i;
	int result;

	ll = n;
	i = 0;
	result = 0;
	if (ll == 0)
		result += ft_putchar('0');
	if (ll < 0)
	{
		result += ft_putchar('-');
		ll *= -1;
	}
	while (ll)
	{
		length[i++] = ll % 10 + '0';
		ll /= 10;
	}
	while (i)
		result += ft_putchar(length[--i]);
	return (result);
}
