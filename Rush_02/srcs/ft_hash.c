/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjeong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:53:28 by yjeong            #+#    #+#             */
/*   Updated: 2020/02/09 17:22:16 by yjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int g_flag = 0;

int				hash_key(char *str)
{
	int ret;
	int len;

	ret = 0;
	len = str_len(str);
	ret = str[len - 1] + len + str[0];
	return (ret);
}

struct s_table	*init_table(void)
{
	int				index;
	struct s_table	*table;

	index = 0;
	table = (struct s_table*)malloc(sizeof(struct s_table) * T_SIZE);
	while (index < T_SIZE)
		table[index++].head = NULL;
	return (table);
}

bool			search_table(struct s_table	*table, char *str)
{
	int				table_key;
	struct s_word	*list;

	table_key = hash_key(str) % T_SIZE;
	list = table[table_key].head;
	while (list != NULL)
	{
		if (str_cmp(list->number, str))
		{
			if (g_flag++)
				write(1, " ", 1);
			print_value(list->english);
			return (true);
		}
		list = list->next;
	}
	return (false);
}

struct s_table	*insert_table(struct s_table	*table, char *num, char *eng)
{
	int				table_key;
	struct s_word	*word;
	struct s_word	*tail;

	table_key = hash_key(num) % T_SIZE;
	word = (struct s_word*)malloc(sizeof(struct s_word));
	word->number = num;
	word->english = eng;
	word->next = NULL;
	if (table[table_key].head == NULL)
		table[table_key].head = word;
	else
	{
		tail = table[table_key].head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = word;
	}
	return (table);
}
