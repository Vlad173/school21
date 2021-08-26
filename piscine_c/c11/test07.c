/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:39:59 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 22:42:53 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

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

int main()
{
	char *arr[5] = {"vlad", "fedya", "", "danila", 0};
	ft_advanced_sort_string_tab(arr, ft_tabcmp);

	for (int i = 0; arr[i] != 0; ++i)
		printf("%s\n", arr[i]);
	
	return (0);
}
