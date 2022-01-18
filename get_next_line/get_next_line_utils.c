/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 20:29:06 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/12/23 22:03:47 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != 0)
		++count;
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s != 0)
	{
		if (*s == (char) c)
		{
			return ((char *)s);
		}
		++s;
	}
	if ((char) c == 0)
		return ((char *)s);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	size;
	char	*result;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size && s1[j])
		result[i++] = s1[j++];
	j = 0;
	while (i < size)
		result[i++] = s2[j++];
	result[i] = 0;
	return (result);
}

char	*ft_strdup(const char *src)
{
	unsigned int	length;
	unsigned int	i;
	char			*str;

	length = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		str[i] = src[i];
		++i;
	}
	str[i] = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	size_t			size;
	unsigned int	i;

	if (!s || len == 0)
		return (NULL);
	size = ft_strlen(s);
	if (start + 1 > size)
		len = 0;
	if (size - start < len)
		len = size - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (len--)
		result[i++] = s[start++];
	result[i] = 0;
	return (result);
}
