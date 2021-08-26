/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:55:09 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/10 21:23:45 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_negative(int *nb)
{
	write(1, "-", 1);
	*nb *= -1;
}

int	ft_count(int nb)
{
	int		count;

	count = 0;
	while (nb)
	{
		nb /= 10;
		++count;
	}
	return (count);
}

int	ft_div(int count, int nb)
{
	--count;
	while (count)
	{
		nb /= 10;
		--count;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int		count;
	int		temp;
	char	c;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
		ft_negative(&nb);
	count = ft_count(nb);
	while (count != 0)
	{
		temp = ft_div(count, nb);
		c = temp % 10 + '0';
		write(1, &c, 1);
		--count;
	}
}
