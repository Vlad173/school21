/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:19:07 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/12/28 02:45:03 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int flags(const char *format, va_list *list)
{
	int result = 0;

	if (*format == 'c')
		result = ft_putchar(va_arg(*list, int));
	else if (*format == 'd' || *format == 'i')
		result = ft_putint(va_arg(*list, int));
	else if (*format == 's')
		result = ft_putstr(va_arg(*list, char*));
	else if (*format == 'x')
		result = ft_puthex(va_arg(*list, unsigned int), "0123456789abcdef");
	else if (*format == 'X')
		result = ft_puthex(va_arg(*list, unsigned int), "0123456789ABCDEF");
	else if (*format == 'p')
	{
		result += ft_putstr("0x");
		result += ft_puthex((unsigned long long) va_arg(*list, void *), "0123456789abcdef");
	}

	return (result);
}

int	ft_printf(const char *format, ...)
{
	int result;
	va_list list;
	
	result = 0;
	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
		{
			result += ft_putchar(*format);
		}
		else
		{
			result += flags(++format, &list);
		}
		++format;
	}
	
	va_end(list);

	return (result);
}
