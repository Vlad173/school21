/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:19:39 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/08 20:21:37 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (dest[i])
		++i;
	j = 0;
	while (src[j] && i < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
