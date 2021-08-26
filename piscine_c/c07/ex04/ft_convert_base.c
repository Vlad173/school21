/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:29:26 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/13 23:39:19 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_int_to_str(char **str, long long ll, char *base);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		++count;
	return (count);
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

int	check_base(char *str, int radix)
{
	int		i;
	int		count[256];

	if (radix <= 1)
		return (0);
	i = 255;
	while (i)
		count[i--] = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		if (!(str[i] > 32 || str[i] <= 126))
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

int	ft_str_to_int(int *result, char *str, char *base)
{
	int	i;
	int	sign;
	int	radix;

	i = 0;
	sign = 1;
	*result = 0;
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
		*result = *result * radix;
		*result = *result + ft_get_index(str[i++], base);
	}	
	*result *= sign;
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result;
	char	*str;

	if (!ft_str_to_int(&result, nbr, base_from))
		return (0);
	if (!ft_int_to_str(&str, result, base_to))
		return (0);
	return (str);
}
