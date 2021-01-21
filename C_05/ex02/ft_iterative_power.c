/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 13:37:52 by youcho            #+#    #+#             */
/*   Updated: 2020/02/03 15:34:55 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 0;
	result = 1;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0 || ((nb < 0) && (power == 0)))
		return (1);
	else
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
}
