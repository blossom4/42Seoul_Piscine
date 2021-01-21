/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_overlap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:25:30 by sanam             #+#    #+#             */
/*   Updated: 2020/02/02 18:36:08 by sanam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	func : Check for overlap in stage
**
**	@param int stage[16]	:	stage
**	@return	int				:	1 (no overlap) 0 (overlap)
*/

int		ft_col_overlap(int stage[16])
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i < 4)
	{
		j = 0;
		while (j + i <= 8 + i)
		{
			k = j + 4;
			while (k + i <= 12 + i)
			{
				if (stage[i + j] == stage[k + i])
					return (0);
				k += 4;
			}
			j += 4;
		}
	}
	return (1);
}

int		ft_row_overlap(int stage[16])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 12)
	{
		j = i;
		while (j <= 2 + i)
		{
			k = j + 1;
			while (k <= 3 + i)
			{
				if (stage[j] == stage[k])
					return (0);
				k++;
			}
			j++;
		}
		i += 4;
	}
	return (1);
}
