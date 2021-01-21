/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:38:59 by youcho            #+#    #+#             */
/*   Updated: 2020/01/31 10:09:31 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if ((nbr / 10) > 0)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}
