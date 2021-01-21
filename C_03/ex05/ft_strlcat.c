/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 10:05:34 by youcho            #+#    #+#             */
/*   Updated: 2020/01/30 15:44:55 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	len(char *c)
{
	unsigned int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int i;
	unsigned int k;

	i = 0;
	dest_len = len(dest);
	k = dest_len;
	src_len = len(src);
	while (dest_len + 1 < size && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	if (size < dest_len)
		return (src_len + size);
	else
		return (k + src_len);
}
