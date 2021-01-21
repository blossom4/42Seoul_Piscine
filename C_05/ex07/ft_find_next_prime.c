/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 12:56:51 by youcho            #+#    #+#             */
/*   Updated: 2020/02/03 19:28:46 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_sqrt(int nb)
{
	int i;

	if (nb > 46340 * 46340)
		return (0);
	i = 0;
	while (i * i < nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (i);
}

int		ft_is_prime(int nb)
{
	int i;

	i = ft_sqrt(nb);
	if (nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	while (i >= 2)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		nb = 2;
	i = nb;
	while (1)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
