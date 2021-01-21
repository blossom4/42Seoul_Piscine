/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 05:40:11 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/09 22:18:15 by yjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int		is_input_error(char *str)
{
	int index;
	int len;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	len = str_len(str);
	if ((len > 1 && str[0] == '0') || len < 1)
		return (0);
	return (1);
}

int		is_error2(char *str, int count, int idx)
{
	int j;

	j = idx;
	if (count == 0)
		return (0);
	while (str[idx] != '\0')
	{
		if (str[j] != ':')
			return (0);
		if (str[idx] < 32 && str[idx] > 126)
			return (0);
		idx++;
	}
	return (1);
}

int		is_error(char *str)
{
	int i;
	int flag;
	int cnt_num;

	flag = 0;
	i = 0;
	cnt_num = 0;
	while (str[i] != ':')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			cnt_num++;
			if (flag != 0)
				return (0);
		}
		else if (str[i] == ' ')
			flag = 1;
		else
			return (0);
		i++;
	}
	return (is_error2(str, cnt_num, i));
}
