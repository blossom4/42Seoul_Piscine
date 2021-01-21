/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:10:17 by youcho            #+#    #+#             */
/*   Updated: 2020/01/28 17:32:56 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_print_16(char c)
{
	unsigned char	b;
	char			*arr;

	b = c;
	arr = "0123456789abcdef";
	if (b >= 16)
	{
		ft_putchar(arr[b / 16]);
		ft_putchar(arr[b % 16]);
	}
	else if (b < 16)
	{
		ft_putchar('0');
		ft_putchar(arr[b % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_print_16(str[i]);
		}
		i++;
	}
}
