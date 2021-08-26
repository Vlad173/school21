/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:53:01 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 22:39:24 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void		ft_putnbr(long long nb);
int			ft_atoi(char *str);
long long	operator_plus(long long a, long long b);
long long	operator_minus(long long a, long long b);
long long	operator_multi(long long a, long long b);
long long	operator_div(long long a, long long b);
long long	operator_mod(long long a, long long b);

int	operator_check(char *str)
{
	if (str[0] == '+' && str[1] == '\0')
		return (0);
	if (str[0] == '-' && str[1] == '\0')
		return (1);
	if (str[0] == '*' && str[1] == '\0')
		return (2);
	if (str[0] == '/' && str[1] == '\0')
		return (3);
	if (str[0] == '%' && str[1] == '\0')
		return (4);
	write(1, "0\n", 2);
	return (-1);
}

int	main(int argc, char *argv[])
{
	long	long	(*arr[5])(long long, long long);
	long long		result;
	int				i;

	arr[0] = &operator_plus;
	arr[1] = &operator_minus;
	arr[2] = &operator_multi;
	arr[3] = &operator_div;
	arr[4] = &operator_mod;
	if (argc != 4)
		return (0);
	i = operator_check(argv[2]);
	if (i == -1)
		return (0);
	if (ft_atoi(argv[3]) == 0)
	{
		if (i == 3)
			write(1, "Stop : division by zero\n", 24);
		if (i == 4)
			write(1, "Stop : modulo by zero\n", 22);
	}
	result = (arr[i])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	ft_putnbr(result);
	return (0);
}
