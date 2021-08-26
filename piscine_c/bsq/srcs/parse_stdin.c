/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_stdin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelicit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:25:27 by efelicit          #+#    #+#             */
/*   Updated: 2021/08/25 17:31:27 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

char	*ft_realloc(char *buf, int *k)
{
	char	*tmp;

	tmp = (char *) malloc(sizeof (char) * ((*k * 3) / 2));
	tmp = ft_strncpy(tmp, buf, *k + 1);
	*k = (*k * 3) / 2;
	free(buf);
	return (tmp);
}

char	*ft_read_line(int size)
{
	char	*buf;
	int		k;
	int		i;
	int		d;

	k = size;
	i = 0;
	d = k;
	buf = (char *) malloc(sizeof (char) * k);
	while (TRUE)
	{
		d = read(0, buf + i, k - i);
		if (d < 0 || (d < k - i && buf[i + d - 1] != '\n'))
			return (NULL);
		else if (buf[i + d - 1] == '\n')
			break ;
		else if (d == k - i)
		{
			buf = ft_realloc(buf, &k);
			i += d;
		}
	}
	buf[i + d - 1] = '\0';
	return (buf);
}

t_bool	ft_parse_map_stdin(t_map *map)
{
	char	*buf;
	int		j;

	j = 0;
	buf = ft_read_line(20);
	if (buf == NULL || !ft_check_first_line(buf, map))
	{
		free(buf);
		return (FALSE);
	}
	map->matrix = (char **) malloc (sizeof (char *) * map->row);
	buf = ft_read_line(BUFFSIZE);
	if (buf == NULL || !ft_check_second_line(buf, map))
	{
		free(buf);
		return (FALSE);
	}
	map->matrix[j] = buf;
	while (++j < map->row)
	{
		map->matrix[j] = ft_read_line(map->col + 1);
		if (!ft_check_other_line(map->matrix[j], map))
			return (FALSE);
	}
	return (TRUE);
}

void	ft_stdin_work(t_map *map)
{
	if (ft_parse_map_stdin(map))
	{
		ft_change_map(map);
		ft_print_map(map);
		ft_free_map(map, map->row);
	}
	else
		write(2, "map error\n", 10);
}
