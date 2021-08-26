/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:42:58 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 08:55:52 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>
#include <sys/errno.h>
#include <stdlib.h>
#include <string.h>

char	*g_prog_name;
int		g_flag;

void		tail(int fd, long long c, char *file, int fc);
long long	ft_atoi(char *str);

void	ft_putstr(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	write_error(char *str)
{
	ft_putstr(basename(g_prog_name));
	write(2, ": ", 2);
	ft_putstr(str);
	write(2, ": ", 2);
	ft_putstr(strerror(errno));
	g_flag = 1;
}

void	func(int *i, long long *c, char **argv)
{
	if (argv[*i][2] != '\0')
		*c = ft_atoi(argv[*i++] + 2);
	else
	{
		*c = ft_atoi(argv[++*i]);
		++*i;
	}
}

int	main(int argc, char *argv[])
{
	long long	c;
	int			i;
	int			fc;

	g_flag = 0;
	g_prog_name = argv[0];
	i = 1;
	func(&i, &c, argv);
	fc = argc - i;
	if (c == 0)
		return (0);
	if (i == argc)
		tail(0, c, "\0", fc);
	while (i < argc)
	{
		tail(1, c, argv[i], fc);
		if (i++ != argc - 1)
			write(1, "\n", 1);
	}
	return (g_flag);
}
