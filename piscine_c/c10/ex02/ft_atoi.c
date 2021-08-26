/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:18:20 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/17 23:21:06 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_digit(char c)
{
	return (c <= '9' && c >= '0');
}

int	ft_is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

long long	ft_atoi(char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while (str[i] == ' ' || ft_is_space(str[i]))
		++i;
	while (ft_is_digit(str[i]))
	{
		result = result * 10 + str[i] - '0';
		++i;
	}
	return (result);
}
