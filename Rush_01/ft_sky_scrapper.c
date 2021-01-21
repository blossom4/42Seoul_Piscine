/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sky_scrapper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:09:49 by sanam             #+#    #+#             */
/*   Updated: 2020/02/02 18:09:53 by sanam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
**	func : Make the "stage" and do presetting and start recursive
**
**	@param int **input	:	col_up, col_down, row_left, row_right
**	@return int			:	1 (when the answer is found) 0 (not found)
*/

int		ft_sky_scrapper(int **input)
{
	int stage[16];
	int i;
	int error;

	error = 1;
	i = -1;
	while (++i < 16)
		stage[i] = 0;
	ft_col_up_setting(stage, input[0], input[1]);
	ft_col_down_setting(stage, input[1], input[0]);
	ft_row_left_setting(stage, input[2], input[3]);
	ft_row_right_setting(stage, input[3], input[2]);
	ft_recursive(stage, 0, input, &error);
	if (error == 1)
		return (0);
	return (1);
}
