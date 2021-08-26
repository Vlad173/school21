/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:22:03 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/17 21:13:34 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/errno.h>
#include <string.h>
#include <libgen.h>

#define BUFFSIZE 1024

char	*g_prog_name;

void	write_stdin(void)
{
	char	c[BUFFSIZE];
	char	c_prev;
	int		d;
	int		d_prev;

	d = 1;
	d_prev = -1;
	while (d >= 0)
	{
		d = read(0, c, BUFFSIZE);
		if (d > 0)
			write(1, c, d);
		if (d == 0 && d_prev == -1)
			break ;
		if (d == 0 && (c_prev == '\n' || d_prev < BUFFSIZE))
			break ;
		c_prev = c[d - 1];
		d_prev = d;
	}
}

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
	write(2, "\n", 1);
}

void	write_file(char *str)
{
	int		fd;
	char	c[BUFFSIZE];
	int		d;
	int		a;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write_error(str);
		return ;
	}
	d = BUFFSIZE;
	a = BUFFSIZE;
	while (d == BUFFSIZE && a == BUFFSIZE)
	{
		d = read(fd, c, BUFFSIZE);
		if (d == -1)
			write_error(str);
		if (d > 0)
			a = write(1, c, d);
		if (a == -1)
			write_error(str);
	}
	if (close(fd))
		write_error(str);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	g_prog_name = argv[0];
	if (argc == 1)
		write_stdin();
	else if (argv[1][0] == '-' && argv[1][1] == '-' && argv[1][2] == '\0')
	{
		if (argc == 2)
			write_stdin();
		++i;
	}
	while (i + 1 < argc)
	{
		if (argv[i + 1][0] == '-' && argv[i + 1][1] == 0)
			write_stdin();
		else
			write_file(argv[i + 1]);
		++i;
	}
	if (errno)
		return (1);
	return (0);
}
