/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:29:36 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/13 23:39:53 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_base(char *str, int radix);
int	ft_strlen(char *str);

int	ft_my_copy(char **str, char *length, int size, int sign)
{	
	int	i;

	i = 0;
	*str = (char *) malloc(sizeof(char) * (size + 1 - sign));
	if (str == NULL)
		return (0);
	if (sign == -1)
	{
		(*str)[i++] = '-';
		++size;
	}
	while (i < size)
	{
		(*str)[i] = length[size - 1 - i];
		++i;
	}
	(*str)[i] = 0;
	return (1);
}	

int	ft_int_to_str(char **str, long long ll, char *base)
{
	int			i;
	int			radix;
	int			sign;
	char		length[32];

	i = 0;
	sign = 0;
	radix = ft_strlen(base);
	if (ll == 0)
		length[i++] = *base;
	if (!check_base(base, radix))
		return (0);
	if (ll < 0)
	{
		ll *= -1;
		sign = -1;
	}
	while (ll)
	{
		length[i++] = base[ll % radix];
		ll /= radix;
	}
	if (!ft_my_copy(str, length, i, sign))
		return (0);
	return (1);
}
