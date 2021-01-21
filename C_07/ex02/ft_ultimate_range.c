/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:56:39 by youcho            #+#    #+#             */
/*   Updated: 2020/02/07 11:21:32 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int d;
	int *temp;

	if (min >= max)
		return (0);
	d = max - min;
	*range = (int *)malloc(sizeof(int) * d);
	if (!*range)
		return (-1);
	temp = *range;
	while (min < max)
		*(temp++) = min++;
	return (d);
}
