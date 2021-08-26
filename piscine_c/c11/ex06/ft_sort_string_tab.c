/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_tabing_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:31:38 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/19 11:09:34 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tabcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (!s1[i] && !s2[i])
			break ;
		++i;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_tabing_tab(char **tab)
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
			if (ft_tabcmp(tab[j], tab[i]) < 0)
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
