/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 17:59:24 by youcho            #+#    #+#             */
/*   Updated: 2020/01/28 10:15:42 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
	{
		return (0);
	}
}