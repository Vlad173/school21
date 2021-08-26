/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:00:45 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/07 22:48:35 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_low(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_digit_or_alpha(char c)
{
	return (ft_is_low(c) || ft_is_upper(c) || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !ft_is_digit_or_alpha(str[i]))
			++i;
		if (str[i] && ft_is_low(str[i]))
			str[i] -= 32;
		++i;
		while (str[i] && ft_is_digit_or_alpha(str[i]))
		{
			if (ft_is_upper(str[i]))
			{
				str[i] += 32;
			}
			++i;
		}
	}
	return (str);
}
