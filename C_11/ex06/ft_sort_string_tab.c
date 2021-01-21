/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:26:02 by youcho            #+#    #+#             */
/*   Updated: 2020/02/12 11:26:04 by youcho           ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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
