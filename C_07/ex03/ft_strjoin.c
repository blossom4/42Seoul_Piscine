/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 17:27:46 by youcho            #+#    #+#             */
/*   Updated: 2020/02/07 11:24:56 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	long long	strs_len;
	char		*temp;
	char		*res;

	if (!size)
	{
		res = ((char *)malloc(1));
		res[0] = 0;
		return (res);
	}
	i = 0;
	strs_len = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	res = (char *)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	temp = ft_strcpy(res, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcpy(temp, sep);
		temp = ft_strcpy(temp, strs[i++]);
	}
	*temp = 0;
	return (res);
}
