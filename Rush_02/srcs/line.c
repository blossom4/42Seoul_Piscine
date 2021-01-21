/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 23:56:55 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/09 22:55:09 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "hash.h"

int		first_cut(char *str)
{
	int i;
	int flag;

	flag = 0;
	i = 0;
	while (str[i] != ':')
	{
		if (flag)
			i++;
		else if (str[i] == ' ' && flag == 0)
			flag = 1;
		else if (str[i] >= '0' && str[i] <= '9' && flag == 0)
			ret[idx++] = str[i];
		i++;
	}
	return (i);
}

int		cut(char *str, struct s_table *t)
{
	char	*ret;
	char	*ret2;
	int		i;
	int		idx;
	int		flag;

	idx = 0;
	ret = (char *)malloc(sizeof(char) * str_len(str));
	ret2 = (char *)malloc(sizeof(char) * str_len(str));
	i = 0;
	if (str[i] == 0 || str[i] == ' ')
		return (0);
	i = first_cut(str) + 1;
	while (str[i] == ' ')
		i++;
	flag = str_len(str);
	while (str[flag] == ' ')
		flag--;
	idx = 0;
	while (i <= flag)
		ret2[idx++] = str[i++];
	t = insert_table(t, ret, ret2);
	free(ret);
	free(ret2);
	return (1);
}
