/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_presetting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 10:59:53 by sanam             #+#    #+#             */
/*   Updated: 2020/02/02 18:13:26 by sanam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	func : set the stage before start recursive using input condition
**
**	@param int stage[16]	:	stage
**	@param input(col_up, col_down, row_left, row_right)
*/

void	ft_col_up_setting(int stage[16], int *col_up, int *col_down)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if (col_up[i] == 4 && col_down[i] == 1)
		{
			stage[0 + i] = 1;
			stage[4 + i] = 2;
			stage[8 + i] = 3;
			stage[12 + i] = 4;
		}
		if (col_up[i] == 3 && col_down[i] == 2)
			stage[8 + i] = 4;
		if (col_up[i] == 1 && col_down[i] == 2)
		{
			stage[0 + i] = 4;
			stage[12 + i] = 3;
		}
		if (col_up[i] == 1)
			stage[i] = 4;
	}
}

void	ft_col_down_setting(int stage[16], int *col_down, int *col_up)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if (col_down[i] == 4 && col_up[i] == 1)
		{
			stage[0 + i] = 4;
			stage[4 + i] = 3;
			stage[8 + i] = 2;
			stage[12 + i] = 1;
		}
		if (col_down[i] == 3 && col_up[i] == 2)
			stage[4 + i] = 4;
		if (col_down[i] == 2 && col_up[i] == 1)
		{
			stage[0 + i] = 4;
			stage[12 + i] = 3;
		}
		if (col_down[i] == 1)
			stage[i + 12] = 4;
	}
}

void	ft_row_right_setting(int stage[16], int *row_right, int *row_left)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if (row_right[i] == 4 && row_left[i] == 1)
		{
			stage[3 + 4 * i] = 1;
			stage[2 + 4 * i] = 2;
			stage[1 + 4 * i] = 3;
			stage[0 + 4 * i] = 4;
		}
		if (row_right[i] == 3 && row_left[i] == 2)
			stage[1 + 4 * i] = 4;
		if (row_right[i] == 2 && row_left[i] == 1)
		{
			stage[4 * i] = 4;
			stage[3 + 4 * i] = 3;
		}
		if (row_right[i] == 1)
			stage[3 + 4 * i] = 4;
	}
}

void	ft_row_left_setting(int stage[16], int *row_left, int *row_right)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if (row_left[i] == 4 && row_right[i] == 1)
		{
			stage[0 + 4 * i] = 1;
			stage[1 + 4 * i] = 2;
			stage[2 + 4 * i] = 3;
			stage[3 + 4 * i] = 4;
		}
		if (row_left[i] == 3 && row_right[i] == 2)
			stage[2 + 4 * i] = 4;
		if (row_left[i] == 2 && row_right[i] == 1)
		{
			stage[4 * i] = 3;
			stage[3 + 4 * i] = 4;
		}
		if (row_left[i] == 1)
			stage[4 * i] = 4;
	}
}
