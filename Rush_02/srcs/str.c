/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 04:26:04 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/09 15:13:05 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_value(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

bool	str_cmp(char *str, char *dest)
{
	int i;

	i = 0;
	while (str[i] && dest[i])
	{
		if (str[i] != dest[i])
			return (false);
		i++;
	}
	if (str[i] != '\0' || dest[i] != '\0')
		return (false);
	return (true);
}
