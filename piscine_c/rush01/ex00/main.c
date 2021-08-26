/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:07:16 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 12:46:09 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_generator(char result[4], int level, int *count, char pers[24][4]);
void	ft_generator1(int level, char *str, char pers[24][4], int *flag);
void	ft_putstr(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		++count;
	return (count);
}

int	ft_is_digit(char c)
{
	return (c >= '1' && c <= '4');
}

int	ft_is_space(char c)
{
	return (c == ' ');
}

int	check_str(char *str)
{
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(str);
	if (size != 31)
		return (0);
	while (i < 31)
	{
		if (!ft_is_digit(str[i++]))
			return (0);
		if (!ft_is_space(str[i]) && i != 31)
			return (0);
		++i;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	char	pers[24][4];
	char	a[4];
	int		flag;
	int		count;

	count = 0;
	flag = 0;
	if (argc != 2)
	{
		ft_putstr("Error");
		return (1);
	}
	if (!check_str(argv[1]))
	{
		ft_putstr("Error");
		return (1);
	}
	ft_generator(a, 0, &count, pers);
	ft_generator1(0, argv[1], pers, &flag);
	if (flag == 0)
	{
		ft_putstr("Error");
		return (1);
	}
	return (0);
}
