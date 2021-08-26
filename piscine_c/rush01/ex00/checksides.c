/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksides.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:40:22 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/15 17:58:15 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_board[4][4];
void	fill_arr(int *arr, int i, char *str);

int	check_sky_right(int arr[4])
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	count = 1;
	while (i < 4)
	{
		j = 3;
		max = g_board[i][3] - '0';
		while (j >= 0)
		{
			if (g_board[i][j] - '0' > max)
			{
				max = g_board[i][j] - '0';
				++count;
			}
			--j;
		}
		if (count != arr[i++])
			return (0);
		count = 1;
	}
	return (1);
}

int	check_sky_left(int arr[4])
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	count = 1;
	while (i < 4)
	{
		j = 1;
		max = g_board[i][0] - '0';
		while (j < 4)
		{
			if (g_board[i][j] - '0' > max)
			{
				max = g_board[i][j] - '0';
				++count;
			}
			++j;
		}
		if (count != arr[i++])
			return (0);
		count = 1;
	}
	return (1);
}

int	check_sky_down(int arr[4])
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	count = 1;
	while (i < 4)
	{
		j = 3;
		max = g_board[3][i] - '0';
		while (j >= 0)
		{
			if (g_board[j][i] - '0' > max)
			{
				max = g_board[j][i] - '0';
				++count;
			}
			--j;
		}
		if (count != arr[i++])
			return (0);
		count = 1;
	}
	return (1);
}

int	check_sky_up(int arr[4])
{
	int	i;
	int	j;
	int	count;
	int	max;

	i = 0;
	count = 1;
	while (i < 4)
	{
		j = 1;
		max = g_board[0][i] - '0';
		while (j < 4)
		{
			if (g_board[j][i] - '0' > max)
			{
				max = g_board[j][i] - '0';
				++count;
			}
			++j;
		}
		if (count != arr[i++])
			return (0);
		count = 1;
	}
	return (1);
}

int	ft_check_sky(char *str)
{
	int	arr[4];

	fill_arr(arr, 0, str);
	if (!check_sky_up(arr))
		return (0);
	fill_arr(arr, 8, str);
	if (!check_sky_down(arr))
		return (0);
	fill_arr(arr, 16, str);
	if (!check_sky_left(arr))
		return (0);
	fill_arr(arr, 24, str);
	if (!check_sky_right(arr))
		return (0);
	return (1);
}
