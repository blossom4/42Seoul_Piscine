/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:25:44 by youcho            #+#    #+#             */
/*   Updated: 2020/02/12 11:25:48 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		size;
	bool	swap;

	size = 0;
	while (tab[size])
		size++;
	while (true)
	{
		i = 0;
		swap = false;
		while (i < size - 1)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				swap = true;
			}
			i++;
		}
		if (!swap)
			break ;
	}
}
