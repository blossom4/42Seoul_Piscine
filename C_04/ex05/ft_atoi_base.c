/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 18:40:35 by youcho            #+#    #+#             */
/*   Updated: 2020/01/31 10:44:31 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		base_length(char *base)
{
	int length;
	int j;

	length = 0;
	if (!base)
		return (0);
	while (base[length])
	{
		if (base[length] == '-' || base[length] == '+')
			return (0);
		j = length + 1;
		while (base[j])
		{
			if (base[length] == base[j])
				return (0);
			j++;
		}
		length++;
	}
	if (length < 2)
		return (0);
	return (length);
}

int		ft_atoi(char *str, char *base)
{
	int i;
	int j;
	int k;

	k = 0;
	while (str[k] != '\0' && ((str[k] > 8 && str[k] < 14) || str[k] == ' '))
		k++;
	i = k;
	while (str[i])
	{
		j = 0;
		while (base[j] && (str[i] != base[j] ||
					(str[i] == '-' || str[i] == '+')))
			j++;
		if (str[i] != base[j] && str[i] != '-' && str[i] != '+')
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	return (1);
}

int		get_nb(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int result;
	int negative;
	int length;

	if (!(length = base_length(base)) || !(ft_atoi(str, base)))
		return (0);
	j = 0;
	while (str[j] != '\0' && ((str[j] > 8 && str[j] < 14) || str[j] == ' '))
		j++;
	i = j - 1;
	result = 0;
	negative = 1;
	while (str[++i] && (((str[i] == '-' || str[i] == '+') && i == j) ||
			(str[i] != '-' && str[i] != '+')))
	{
		if (str[i] == '-')
			negative = -1;
		else if (str[i] != '+')
			result = (result * length) + (get_nb(str[i], base));
	}
	return (result * negative);
}
