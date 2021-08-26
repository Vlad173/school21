/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:06:32 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/12 19:39:32 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		++i;
	j = 0;
	while (src[j])
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		++count;
	return (count);
}	

int	ft_entire_length(int size, char **strs)
{	
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < size)
		count += ft_strlen(strs[i++]);
	return (count);
}

int	calculate_length(int size, char **strs, char *sep)
{
	int		length;
	int		seplength;

	if (size == 0)
		return (0);
	length = ft_entire_length(size, strs);
	seplength = ft_strlen(sep);
	length = length + seplength * (size - 1);
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		length;

	str = NULL;
	length = calculate_length(size, strs, sep);
	if (size >= 0)
		str = (char *) malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	else
		*str = '\0';
	i = 0;
	j = 0;
	while (i < 2 * size - 1 && size >= 1)
	{
		if (i++ % 2 == 1)
			ft_strcat(str, sep);
		else
			ft_strcat(str, strs[j++]);
	}
	return (str);
}
