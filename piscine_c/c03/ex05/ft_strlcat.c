/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:06:52 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/08 20:25:42 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (dest[i])
		++i;
	j = 0;
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (i);
}
