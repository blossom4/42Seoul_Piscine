/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:28:43 by youcho            #+#    #+#             */
/*   Updated: 2020/02/12 11:28:46 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
#include "ft_is.h"

int		ft_atoi(char *str)
{
	int	res;
	int	s;

	s = 1;
	while (ft_is_whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	res = 0;
	while (ft_is_number(*str))
	{
		res *= 10;
		res += (*str) - '0';
		str++;
	}
	return (res * s);
}
