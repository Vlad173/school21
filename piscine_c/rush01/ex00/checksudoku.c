/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:49:24 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/15 17:59:50 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_board[4][4];

int	ft_check_sudoku(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			k = j + 1;
			while (k < 4)
			{
				if (g_board[k][i] == g_board[j][i])
					return (0);
				++k;
			}
			++j;
		}
		++i;
	}
	return (1);
}

void	fill_arr(int *arr, int i, char *str)
{
	arr[0] = str[i] - '0';
	i += 2;
	arr[1] = str[i] - '0';
	i += 2;
	arr[2] = str[i] - '0';
	i += 2;
	arr[3] = str[i] - '0';
}
