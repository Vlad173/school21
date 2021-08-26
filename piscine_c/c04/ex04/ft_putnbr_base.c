/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:25:32 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/12 22:57:36 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	char		length[32];
	int			i;
	long long	ll;
	int			radix;

	i = 0;
	ll = nbr;
	radix = ft_strlen(base);
	if (!check_base(base, radix))
		return ;
	if (ll < 0)
	{
		ll *= -1;
		ft_putchar('-');
	}
	while (ll)
	{
		length[i++] = base[ll % radix];
		ll /= radix;
	}
	if (nbr == 0)
		ft_putchar(*base);
	while (i)
		ft_putchar(length[--i]);
}
