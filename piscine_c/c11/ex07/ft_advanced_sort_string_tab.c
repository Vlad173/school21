/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:50:49 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 21:20:46 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (tab[i + 1] != ((void *) 0))
	{
		j = i + 1;
		while (tab[j] != ((void *) 0))
		{
			if ((*cmp)(tab[i], tab[j]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			++j;
		}
		++i;
	}
}
