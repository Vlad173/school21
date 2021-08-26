/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:06:40 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/09 17:14:08 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	*first;
	int	*last;
	int	temp;
	
	if (!tab)
		return ;
	first = tab;
	last = tab + size - 1;
	while (first < last)
	{
		temp = *first;
		*first = *last;
		*last = temp;
		++first;
		--last;
	}
}
