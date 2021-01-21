/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:00:41 by youcho            #+#    #+#             */
/*   Updated: 2020/02/03 15:34:43 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1 || nb == 2)
		return (nb);
	while (nb > 1)
	{
		i *= nb;
		nb -= 1;
	}
	return (i);
}
