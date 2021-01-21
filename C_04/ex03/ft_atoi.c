/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:26:39 by youcho            #+#    #+#             */
/*   Updated: 2020/01/30 20:20:36 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_calcul(char *str)
{
	int num;

	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num);
}

int		ft_atoi(char *str)
{
	int i;
	int j;
	int negative;

	i = 0;
	j = 0;
	negative = 1;
	while (str[i] < '0' || str[i] > '9')
	{
		if ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		{
			if (j == 1)
				return (0);
		}
		else if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				negative *= -1;
			j = 1;
		}
		else
			return (0);
		i++;
	}
	return (negative * ft_calcul(&str[i]));
}
