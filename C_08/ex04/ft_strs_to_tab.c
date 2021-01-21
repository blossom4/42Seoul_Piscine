/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:07:09 by youcho            #+#    #+#             */
/*   Updated: 2020/02/10 19:22:11 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					str_size(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void				str_cpy(char *dest, char *src)
{
	int				i;

	i = 0;
	while (*src)
		*(dest)++ = *(src)++;
	*dest = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*res;
	int				i;

	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < ac)
	{
		res[i].size = str_size(av[i]);
		res[i].str = (char*)malloc(res[i].size + 1);
		res[i].copy = (char*)malloc(res[i].size + 1);
		str_cpy(res[i].str, av[i]);
		str_cpy(res[i].copy, av[i]);
		++i;
	}
	res[i].str = 0;
	return (res);
}
