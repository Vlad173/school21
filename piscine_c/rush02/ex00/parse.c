/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 23:24:21 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/23 18:04:19 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_map_copy(char **str, char *file, int count)
{
	int	fd;

	fd = open(file, O_RDONLY);
	read(fd, *str, count);
	(*str)[count] = '\0';
	close(fd);
}

char	*ft_map(char *file)
{
	int		fd;
	char	buff[BUFFSIZE];
	char	*str;
	int		count;
	int		d;

	count = 0;
	d = 1;
	fd = open(file, O_RDONLY);
	while (1)
	{
		d = read(fd, buff, BUFFSIZE);
		if (d > 0)
			count += d;
		if (d == 0)
			break ;
	}
	close(fd);
	str = (char *) malloc(sizeof(char) * (count + 1));
	ft_map_copy(&str, file, count);
	return (str);
}

void	clear_arr(char **arr, int size)
{
	int	i;

	i = 0;
	size = 0;
	free(arr[0]);
	free(arr[1]);
	free(arr[2]);
	free(arr);
}

int	parse_line(char *line, t_elem **arr, int *flag)
{
	char	**temp;
	int		count;
	char	*str;

	replace_colon(line);
	temp = ft_split(line, "\n \0", &count);
	if (count == 0)
	{
		free(temp[0]);
		free(temp);
		return (1);
	}
	if (count == 1)
	{
		*flag = 0;
		free(temp[0]);
		free(temp);
		return (0);
	}
	str = ft_strjoin(count - 1, temp + 1, " \0");
	if (!init_entry(temp[0], str, arr))
		*flag = 0;
	clear_arr(temp, count);
	free(str);
	return (*flag);
}

int	parse_file(char	*file, t_elem **arr)
{
	char	*str;
	char	**lines;
	int		size;
	int		flag;

	flag = 1;
	str = ft_map(file);
	lines = ft_split(str, "\n", &size);
	free(str);
	while (*lines != NULL)
	{
		if (flag != 0)
			parse_line(*lines, arr, &flag);
		free(*lines);
		++lines;
	}
	free(lines - size);
	if (flag == 0)
		return (0);
	return (1);
}
