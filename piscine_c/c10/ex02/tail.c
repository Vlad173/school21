/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:18:12 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/17 23:38:40 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>
#include <sys/errno.h>
#include <stdlib.h>
#include <string.h>

void	ft_putstr(char *str);
void	write_error(char *str);

int	tail_stdin2(char *buff, long long c, int *j)
{
	char	c_prev;
	int		d;
	int		d_prev;
	int		count;

	d = 1;
	d_prev = -1;
	count = 0;
	while (d >= 0)
	{
		d = read(0, buff + *j, c - *j);
		if (d == c - *j)
			*j = 0;
		else if (d > 0)
			*j += d;
		if (d == 0 && d_prev == -1)
			break ;
		if (d == 0 && (c_prev == '\n' || d_prev < c))
			break ;
		c_prev = buff[d - 1];
		d_prev = d;
		++count;
	}
	return (count);
}

void	tail_stdin1(char *buff, long long c)
{
	int	count;
	int	j;

	j = 0;
	count = tail_stdin2(buff, c, &j);
	if (count > 1)
		write(1, buff + j, c - j);
	write(1, buff, j);
}

void	tail_file(int fd, char *buff, long long c)
{
	int	d;
	int	count;
	int	j;

	d = c;
	j = 0;
	count = 0;
	while (d == c)
	{
		d = read(fd, buff, c);
		if (d == c - j)
			j = 0;
		else if (d > 0)
			j += d;
		++count;
	}
	if (count > 1)
		write(1, buff + j, c - j);
	write(1, buff, j);
}

void	tail(int fd, long long c, char *file, int fc)
{
	char	*buff;

	buff = (char *) malloc(sizeof(char) * c);
	if (fd == 0)
		tail_stdin1(buff, c);
	else
	{
		fd = open(file, O_RDONLY);
		if (fd == -1)
		{
			write_error(file);
			return ;
		}
		if (fc > 1)
		{
			write(1, "==> ", 4);
			ft_putstr(file);
			write(1, " <==", 4);
			write(1, "\n", 1);
		}
		tail_file(fd, buff, c);
		if (close(fd) == -1)
			write_error(file);
	}
	free(buff);
}
