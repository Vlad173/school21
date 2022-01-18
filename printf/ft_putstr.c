/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 23:53:19 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/12/31 12:49:51 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	result;

	result = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
	{
		result += ft_putchar(*s);
		++s;
	}
	return (result);
}
