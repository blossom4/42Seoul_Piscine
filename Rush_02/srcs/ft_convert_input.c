/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjeong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:32:59 by yjeong            #+#    #+#             */
/*   Updated: 2020/02/09 21:00:11 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

char	*get_digit(int len)
{
	int		index;
	char	*digit;

	index = 0;
	digit = (char*)malloc(sizeof(char) * (len * 3 + 2));
	digit[index++] = '1';
	while (index < len * 3 + 1)
		digit[index++] = '0';
	digit[index] = '\0';
	return (digit);
}

char	*make_number(char *num)
{
	int		len;
	int		mod_idx;
	int		num_idx;
	char	*mod;

	mod_idx = 0;
	len = str_len(num);
	if (len % 3 == 0)
		return (num);
	mod = (char*)malloc(sizeof(char) * (len + 5 - (len % 3)));
	while (mod_idx < (3 - (len % 3)))
		mod[mod_idx++] = '0';
	num_idx = 0;
	while (num[num_idx] != '\0')
		mod[mod_idx++] = num[num_idx++];
	mod[mod_idx] = 0;
	return (mod);
}

char	*remove_zero(char *num)
{
	int index;

	index = 0;
	while (num[index] == '0')
		index++;
	if (num[index] == '\0')
		return ("0");
	return (num + index);
}

char	*str_num(int num)
{
	int		digit;
	int		number;
	char	*str;

	digit = 0;
	number = num;
	while (number > 0)
	{
		digit++;
		number /= 10;
	}
	str = (char*)malloc(sizeof(char) * (digit + 1));
	str[digit] = '\0';
	while (--digit >= 0)
	{
		str[digit] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

void	ft_send_value(char *num, struct s_table *table)
{
	int index;
	int digit;

	index = -1;
	digit = (str_len(num) / 3) - 1;
	while (num[++index] != '\0')
	{
		if (index % 3 == 0 && num[index] > '0')
		{
			search_table(table, str_num(num[index] - '0'));
			search_table(table, "100");
		}
		else if (index % 3 == 1 && num[index] > '1')
			search_table(table, str_num((num[index] - '0') * 10));
		else if (index % 3 == 2)
		{
			if (num[index - 1] == '1')
				search_table(table, str_num(num[index] - '0' + 10));
			else if (num[index] != '0')
				search_table(table, str_num(num[index] - '0'));
			if (num[index + 1] != '\0' && (num[index] != '0' ||
						num[index - 1] != '0' || num[index - 2] != '0'))
				search_table(table, get_digit(digit--));
		}
	}
}
