/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:25:17 by sanam             #+#    #+#             */
/*   Updated: 2020/02/02 18:02:44 by sanam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	func : check input condition when the value is 1
**
**	@param int **input	:	col_up, col_down, row_left, row_right
**	@return int			:	1 (when the input is valid) 0 (not valid)
*/

int		ft_valid_input_one(int **input)
{
	int i;
	int j;
	int cnt[4];

	cnt[0] = 0;
	cnt[1] = 0;
	cnt[2] = 0;
	cnt[3] = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (input[i][j] == 1)
				cnt[i]++;
		if (cnt[i] != 1)
			return (0);
		if (!(input[0][i] + input[1][i] >= 3
			&& input[0][i] + input[1][i] <= 5))
			return (0);
	}
	return (1);
}

/*
**	func : check input condition when the value is 2
**
**	@param int **input	:	col_up, col_down, row_left, row_right
**	@return int			:	1 (when the input is valid) 0 (not valid)
*/

int		ft_valid_input_two(int **input)
{
	int i;
	int j;
	int cnt[4];

	cnt[0] = 0;
	cnt[1] = 0;
	cnt[2] = 0;
	cnt[3] = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (input[i][j] == 2)
				cnt[i]++;
		if (cnt[i] == 0)
			return (0);
		if (!(input[2][i] + input[3][i] >= 3
			&& input[2][i] + input[3][i] <= 5))
			return (0);
	}
	return (1);
}

/*
**	func : check input condition when the value is 2
**
**	@param int **input	:	col_up, col_down, row_left, row_right
**	@return int			:	1 (when the input is valid) 0 (not valid)
*/

int		ft_valid_input_four(int **input)
{
	int i;
	int j;
	int cnt[4];

	cnt[0] = 0;
	cnt[1] = 0;
	cnt[2] = 0;
	cnt[3] = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (input[i][j] == 4)
				cnt[i]++;
		if (cnt[i] > 1)
			return (0);
	}
	return (1);
}

/*
**	func : check all input condition (1, 2, 4)
**
**	@param int **input	:	col_up, col_down, row_left, row_right
**	@return int			:	1 (when the all input is valid) 0 (not valid)
*/

int		ft_check_input(int **input)
{
	if (ft_valid_input_one(input) && ft_valid_input_two(input)
			&& ft_valid_input_four(input))
		return (1);
	return (0);
}
