/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 18:16:31 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/08 20:23:37 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		++count;
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	lpattern;

	i = 0;
	lpattern = ft_strlen(to_find);
	if (!lpattern)
		return (str);
	while (str[i + lpattern - 1])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			++j;
		}
		++i;
	}	
	return (0);
}
