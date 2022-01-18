/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 00:03:44 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/12/31 12:47:21 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
		++count;
	return (count);
}

int	ft_puthex(unsigned long long nbr, const char *base)
{
	char				length[32];
	int					i;
	unsigned long long	ll;
	int					result;

	i = 0;
	result = 0;
	ll = nbr;
	while (ll)
	{
		length[i++] = base[ll % 16];
		ll /= 16;
	}
	if (nbr == 0)
		result += ft_putchar(*base);
	while (i)
		result += ft_putchar(length[--i]);
	return (result);
}
