/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_condition.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:25:04 by sanam             #+#    #+#             */
/*   Updated: 2020/02/02 18:39:02 by sanam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	func : check the stage if is valid or not
**
**	@param int stage[16] : stage
**	@param int *col_up, *col_down, *row_left, *row_right
**	@return	int : 1 (valid), 0 (not valid)
*/

int		ft_check_col_up(int stage[16], int *col_up)
{
	int i;
	int j;
	int count;
	int flag;

	i = -1;
	count = 0;
	while (++i < 4)
	{
		j = 0;
		count = 0;
		flag = 0;
		while ((j + i) <= 12 + i)
		{
			if (flag < stage[j + i])
			{
				count++;
				flag = stage[j + i];
			}
			j += 4;
		}
		if (count != col_up[i])
			return (0);
	}
	return (1);
}

int		ft_check_col_down(int stage[16], int *col_down)
{
	int i;
	int j;
	int count;
	int flag;

	i = -1;
	while (++i < 4)
	{
		flag = 0;
		j = 12 + i;
		count = 0;
		while (j >= 0 + i)
		{
			if (flag < stage[j])
			{
				count++;
				flag = stage[j];
			}
			j -= 4;
		}
		if (count != col_down[i])
			return (0);
	}
	return (1);
}

int		ft_check_row_left(int stage[16], int *row_left)
{
	int i;
	int j;
	int count;
	int flag;

	i = -1;
	while (++i < 4)
	{
		count = 0;
		flag = 0;
		j = 4 * i;
		while (j <= 3 + 4 * i)
		{
			if (flag < stage[j])
			{
				count++;
				flag = stage[j];
			}
			j += 1;
		}
		if (count != row_left[i])
			return (0);
	}
	return (1);
}

int		ft_check_row_right(int stage[16], int *row_right)
{
	int i;
	int j;
	int count;
	int flag;

	i = -1;
	while (++i < 4)
	{
		count = 0;
		flag = 0;
		j = 3 + 4 * i;
		while (j >= 4 * i)
		{
			if (flag < stage[j])
			{
				count++;
				flag = stage[j];
			}
			j -= 1;
		}
		if (count != row_right[i])
			return (0);
	}
	return (1);
}

int		ft_check_condition(int stage[16], int **input)
{
	if (ft_check_col_up(stage, input[0]) &&
		ft_check_col_down(stage, input[1]) &&
		ft_check_row_left(stage, input[2]) &&
		ft_check_row_right(stage, input[3]))
		return (1);
	return (0);
}
