/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:13:48 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/25 19:10:27 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	t_map	map;
	int		i;

	i = 0;
	if (argc == 1)
		ft_stdin_work(&map);
	while (++i < argc)
		ft_file_work(argv[i], &map);
	return (0);
}
