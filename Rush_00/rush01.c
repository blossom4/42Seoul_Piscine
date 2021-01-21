/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 15:26:43 by nakim             #+#    #+#             */
/*   Updated: 2020/01/26 15:26:46 by nakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int garo, int sero)
{
	int		b_count;

	b_count = 1;
	if (garo <= 0 || sero <= 0)
		return ;
	ft_putchar('/');
	while (b_count++ <= garo - 2)
	{
		ft_putchar('*');
	}
	if (garo > 1)
		ft_putchar('\\');
}

void	middle_line(int garo, int sero)
{
	int		space_count;
	int		b_count;

	b_count = 1;
	if (garo <= 0 || sero <= 1)
		return ;
	while (b_count++ <= sero - 2)
	{
		ft_putchar('\n');
		ft_putchar('*');
		space_count = 1;
		while (space_count++ <= garo - 2)
		{
			ft_putchar(' ');
		}
		if (garo > 1)
			ft_putchar('*');
	}
	ft_putchar('\n');
}

void	last_line(int garo, int sero)
{
	int		b_count;

	b_count = 1;
	if (garo >= 1 && sero >= 2)
		ft_putchar('\\');
	while (b_count++ <= garo - 2)
	{
		if (sero >= 2)
			ft_putchar('*');
	}
	if (garo > 1 && sero >= 2)
		ft_putchar('/');
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
		return ;
	first_line(x, y);
	middle_line(x, y);
	last_line(x, y);
}
