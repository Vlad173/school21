/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vladislove <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:10:30 by vladislov         #+#    #+#             */
/*   Updated: 2021/10/14 01:24:31 by vladislov        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i + 1 < len)
	{
		if (!s1[i] && !s2[i])
			break ;
		++i;
	}
	return (s1[i] - s2[i]);
}
