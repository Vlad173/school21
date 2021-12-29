/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 05:57:24 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/12/28 02:43:47 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
#include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *, ...);

// format specifiers

int ft_putchar(const char c);
int	ft_putint(const int n);
int	ft_putstr(const char *s);
int	ft_puthex(const unsigned long long nbr, const char *base);

#endif
