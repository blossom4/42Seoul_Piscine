/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:23:00 by hyejo             #+#    #+#             */
/*   Updated: 2020/02/09 22:46:11 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "hash.h"

void	input_error_print(void)
{
	write(1, "Error\n", 6);
}

void	dict_error_print(void)
{
	write(1, "Dict Error\n", 11);
}

int		print_dict_display(char *file_path, struct s_table *table)
{
	int		file;
	int		len;
	char	data;
	char	*input;

	len = 0;
	input = (char *)malloc(sizeof(char) * 2048);
	if ((file = open(file_path, O_RDONLY)) < 0)
		return (0);
	while (read(file, &data, 1))
	{
		input[len] = data;
		if (data == '\n')
		{
			if (len == 0)
				continue;
			input[len] = 0;
			cut(input, table);
			len = -1;
			input = (char *)malloc(sizeof(char) * 2048);
		}
		len++;
	}
	close(file);
	return (1);
}
