/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:37:14 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 11:18:41 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{	
	int	i;

	i = 0;
	while (tab[i] != ((void *)0))
	{
		if ((*f)(tab[i]))
			return (1);
		++i;
	}
	return (0);
}
