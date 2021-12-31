/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 20:28:48 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/12/23 22:19:59 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	concatenation(char **str, char *buff, int fd)
{
	char	*temp;

	if (!str[fd])
	{
		str[fd] = ft_strdup(buff);
	}
	else
	{
		temp = str[fd];
		str[fd] = ft_strjoin(str[fd], buff);
		free(temp);
	}
}

static size_t	ft_read(char *str[255], int fd)
{
	char	*buff;
	int		d;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (1)
	{
		d = read(fd, buff, BUFFER_SIZE);
		if (d <= 0)
			break ;
		buff[d] = 0;
		concatenation(str, buff, fd);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	free(buff);
	return (!(d < 0 || !str[fd] || !*str[fd]));
}

char	*get_next_line(int fd)
{
	static char		*str[255];
	char			*temp;
	char			*nl;
	unsigned int	nl_pos;
	char			*result;

	if (!ft_read(str, fd))
		return (NULL);
	temp = str[fd];
	nl = ft_strchr(str[fd], '\n');
	nl_pos = nl - str[fd] + 1;
	if (nl)
	{
		result = ft_substr(str[fd], 0, nl_pos);
		str[fd] = ft_substr(str[fd], nl_pos, ft_strlen(str[fd]) - nl_pos);
		free(temp);
	}
	else
	{
		result = str[fd];
		str[fd] = NULL;
	}
	return (result);
}
