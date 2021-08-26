/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:07:05 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/12 22:18:05 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		++count;
	return (count);
}

int	check_base(char *str, int radix)
{
	int		i;
	int		count[256];

	if (radix <= 1)
		return (1);
	i = 255;
	while (i)
		count[i--] = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		if (!(str[i] >= 32 || str[i] <= 126))
			return (0);
		++count[(int) str[i]];
		++i;
	}
	i = 255;
	while (i)
		if (count[i--] > 1)
			return (0);
	return (1);
}

int	ft_get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		++i;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	radix;

	i = 0;
	sign = 1;
	result = 0;
	radix = ft_strlen(base);
	if (!check_base(base, radix))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_get_index(str[i], base) != -1)
	{
		result = result * radix;
		result = result + ft_get_index(str[i++], base);
	}
	if (sign == -1)
		result *= -1;
	return (result);
}
