/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:36:03 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/18 13:46:51 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_board[4][4];

void	ft_putchar(char c);
int		ft_check_sudoku(void);
int		ft_check_sky(char *str);
int		check_sky_right(int arr[4]);
int		check_sky_left(int arr[4]);
int		check_sky_up(int arr[4]);
int		check_sky_down(int arr[4]);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

void	write_result(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(g_board[i][j] + '0');
			if (j != 3)
				ft_putchar(' ');
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}

int	check_positions(char result[4], int level, int row)
{
	int	i;

	i = 0;
	while (i < level)
	{
		if (result[i] == row)
			return (0);
		++i;
	}
	return (1);
}

void	ft_generator(char result[4], int level, int *count, char pers[24][4])
{
	int	j;

	j = 1;
	while (j <= 4)
	{	
		if (check_positions(result, level, j))
		{
			result[level] = j;
			if (level == 3)
			{
				pers[*count][0] = result[0];
				pers[*count][1] = result[1];
				pers[*count][2] = result[2];
				pers[(*count)++][3] = result[3];
			}
			else
				ft_generator(result, level + 1, count, pers);
		}
		++j;
	}
}

void	ft_generator1(int level, char *str, char pers[24][4], int *flag)
{
	int	j;

	j = 0;
	while (j <= 23)
	{
		if (*flag == 1)
			return ;
		ft_strcpy(g_board[level], pers[j]);
		if (level == 3)
		{
			if (ft_check_sudoku())
			{
				if (ft_check_sky(str))
				{
					write_result();
					*flag = 1;
				}
			}
		}
		else
			ft_generator1(level + 1, str, pers, flag);
		++j;
	}
}
