/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:19:49 by youcho            #+#    #+#             */
/*   Updated: 2020/02/07 11:19:58 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int i;

	if (min >= max)
		return (0);
	res = (int*)malloc(sizeof(int) * ((long long)max - min));
	if (!res)
		return (0);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
