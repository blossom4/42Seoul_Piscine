/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 19:30:34 by youcho            #+#    #+#             */
/*   Updated: 2020/02/10 10:57:09 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	res = (char *)malloc((len + 1));
	while (i < len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
