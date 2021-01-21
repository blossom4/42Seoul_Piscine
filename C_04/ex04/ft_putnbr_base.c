/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 14:40:02 by youcho            #+#    #+#             */
/*   Updated: 2020/01/31 10:13:44 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		error(char *base)
{
	int i;
	int j;

	i = 0;
	if (!base)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	change(int n, char *base, unsigned int size)
{
	unsigned int nbr;

	if (n < 0)
	{
		ft_putchar('-');
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr >= size)
		change(nbr / size, base, size);
	ft_putchar(base[nbr % size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int size;

	size = 2;
	size = error(base);
	if (!size)
		return ;
	change(nbr, base, size);
}
