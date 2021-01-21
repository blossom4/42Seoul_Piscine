/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:21:18 by youcho            #+#    #+#             */
/*   Updated: 2020/02/10 19:08:29 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

void	print_size(int size)
{
	char c;

	if (!size)
		return ;
	c = size % 10 + '0';
	print_size(size / 10);
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		if (par[i].size)
			print_size(par[i].size);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
