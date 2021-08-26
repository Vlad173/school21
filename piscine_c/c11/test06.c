/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:39:59 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 22:42:03 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_sort_tabing_tab(char **tab);

int main()
{
	char *arr[12] = {"b", "a", "A", "B", "aA", "aaa", "", "vlad", "", "fedya", "danila", 0};
	ft_sort_tabing_tab(arr);

	for (int i = 0; arr[i] != 0; ++i)
		printf("%s\n", arr[i]);
	
	return (0);
}
