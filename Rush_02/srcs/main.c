/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjeong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 09:53:05 by yjeong            #+#    #+#             */
/*   Updated: 2020/02/09 23:04:14 by yjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "hash.h"
#include "ft.h"

char	*str_cat(char *str, char *dest)
{
	int		len;
	int		len2;
	int		i;
	int		idx;
	char	*ret;

	i = 0;
	idx = 0;
	len = str_len(str);
	len2 = str_len(dest);
	ret = (char *)malloc(sizeof(char) * (len + len2 + 1));
	while (str[i])
		ret[idx++] = str[i++];
	i = 0;
	while (dest[i])
		ret[idx++] = dest[i++];
	ret[idx] = 0;
	return (ret);
}

int		check_error(int flag)
{
	if (flag == 1)
		input_error_print();
	else if (flag == 2)
		dict_error_print();
	return (0);
}

int		check_zero(char *argv, struct s_table *table)
{
	if (argv[0] == '0' && argv[1] == '\0')
	{
		search_table(table, argv);
		return (0);
	}
	return (1);
}

int		o_argc(int argc, char **argv, struct s_table *table)
{
	if (argc == 2)
	{
		if (!is_input_error(argv[1]))
			return (check_error(1));
		if (!print_dict_display(str_cat(PATH_DICT, "numbers.dict"), table))
			return (check_error(2));
		if (!check_zero(argv[1], table))
			return (0);
		ft_send_value(make_number(remove_zero(argv[1])), table);
	}
	else if (argc == 3)
	{
		if (str_cmp(str_cat(PATH_DICT, argv[1]), PATH_DICT)
				|| !print_dict_display(str_cat(PATH_DICT, argv[1]), table))
			return (check_error(2));
		if (!is_input_error(argv[2]))
			return (check_error(1));
		if (!check_zero(argv[2], table))
			return (0);
		ft_send_value(make_number(remove_zero(argv[2])), table);
	}
}

int		main(int argc, char **argv)
{
	struct s_table	*table;

	table = init_table();
	if (argc == 1)
		print_dict_display(str_cat(PATH_DICT, "numbers.dict"), table);
	else
	{
		if (!o_argc(argc, argv, table))
			return (0);
	}
	return (0);
}
