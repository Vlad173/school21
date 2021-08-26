/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:13:39 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/11 15:43:14 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (!s1[i] && !s2[i])
			break ;
		++i;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		++str;
	}
	write(1, "\n", 1);
}

void	bubble_sort(char **str, int	size)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	if (size <= 1)
		return ;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[j], str[i]) < 0)
			{
				temp = str[j];
				str[j] = str[i];
				str[i] = temp;
			}
			++j;
		}
		++i;
	}
}

int	main(int argc, char *argv[])
{
	int		i;

	bubble_sort(argv, argc);
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
