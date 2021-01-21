/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:33:01 by sanam             #+#    #+#             */
/*   Updated: 2020/02/02 18:33:04 by sanam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
**	Global variable
**	g_flag	:	breaking the recursive.
*/

int		g_flag = 1;

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

/*
**	func : print stage & change the value of g_flag and error
**
**	@param int stage[16]	:	stage
**	@param in *error		:	error
**
**	If ft_print never executed, there is no possible way.
**	It means the input condition is error.
*/

void	ft_print(int stage[16], int *error)
{
	int i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(stage[i] + '0');
		if (i % 4 == 3)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
	g_flag = -1;
	*error = -1;
}

/*
**	func : build tower & destroy tower
**
**	@param int stage[16]	:	stage
**	@param int loc			:	location
**	@param int height(ft_build_tower) : place the 'height-box' on stage
*/

void	ft_build_tower(int stage[16], int loc, int height)
{
	stage[loc] = height;
}

void	ft_destroy_tower(int stage[16], int loc)
{
	stage[loc] = 0;
}

/*
**	func : resursive
**
**	@param int stage[16]	:	stage
**	@param int loc			:	location
**	@param int **input		:	input condition
**	@param int *error		:	using in ft_print & ft_sky_scrapper
**	Global variable "g_flag":	g_flag is excuted only once.
*/

void	ft_recursive(int stage[16], int loc, int **input, int *error)
{
	int height;

	if (g_flag == -1)
		return ;
	if (loc == 16 && g_flag == 1)
	{
		if (ft_check_condition(stage, input) && ft_col_overlap(stage)
			&& ft_row_overlap(stage))
			ft_print(stage, error);
	}
	else
	{
		if (stage[loc] == 0)
		{
			height = 0;
			while (++height < 5)
			{
				ft_build_tower(stage, loc, height);
				ft_recursive(stage, loc + 1, input, error);
			}
			ft_destroy_tower(stage, loc);
		}
		else
			ft_recursive(stage, loc + 1, input, error);
	}
}
