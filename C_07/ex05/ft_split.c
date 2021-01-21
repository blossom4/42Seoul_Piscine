/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:51:37 by youcho            #+#    #+#             */
/*   Updated: 2020/02/07 13:01:47 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

long long		get_word_cnt(char *str, char *charset)
{
	long long	cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
			++cnt;
		++str;
	}
	return (cnt);
}

void			ft_strcpy(char *dest, char *from, char *until)
{
	int i;

	i = 0;
	while (from + i < until)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = 0;
}

char			**ft_split(char *str, char *charset)
{
	char		**res;
	long long	i;
	char		*from;

	res = (char**)malloc(sizeof(char*) * get_word_cnt(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			from = str;
			while (*str && !is_in_charset(*str, charset))
				++str;
			res[i] = (char*)malloc(str - from + 1);
			ft_strcpy(res[i++], from, str);
		}
		else
			++str;
	}
	res[i] = 0;
	return (res);
}
