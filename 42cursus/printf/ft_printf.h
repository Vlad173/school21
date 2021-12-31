/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 05:57:24 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/12/31 12:51:24 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

// format specifiers

int	ft_putchar(const char c);
int	ft_putint(const int n);
int	ft_putstr(const char *s);
int	ft_puthex(unsigned long long nbr, const char *base);
int	ft_putuint(const unsigned int n);

#endif
