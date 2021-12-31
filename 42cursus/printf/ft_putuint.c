/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:44:29 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/12/31 12:49:10 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(const unsigned int n)
{
	long long		ll;
	char			length[20];
	unsigned int	i;
	int				result;

	ll = n;
	i = 0;
	result = 0;
	if (ll == 0)
		result += ft_putchar('0');
	while (ll)
	{
		length[i++] = ll % 10 + '0';
		ll /= 10;
	}
	while (i)
		result += ft_putchar(length[--i]);
	return (result);
}
