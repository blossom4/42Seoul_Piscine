/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 10:28:33 by youcho            #+#    #+#             */
/*   Updated: 2020/02/03 15:14:43 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_recursive_power(int nb, int power)
{
	int i;

	i = 0;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0 || ((nb < 0) && (power == 0)))
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
