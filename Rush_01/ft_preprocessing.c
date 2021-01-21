/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preprocessing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:25:55 by sanam             #+#    #+#             */
/*   Updated: 2020/02/02 17:58:29 by sanam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*
**	func : check c is space
**
**	@param	char c	: input char
**	@return	int		: 0 (if c is not space), 1 (if c is space)
*/

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

/*
**	func : check input string
**
**	@param	char *str 	: input string
**	@param	int  *count : count the input number
**	@return int			: 1 (input is valid), 0 (input is not valid)
*/

int		ft_is_valid_num(char *str, int *count)
{
	while (*str)
	{
		if (ft_is_space(*str) || (*str >= '1' && *str <= '4'))
		{
			if (*str >= '1' && *str <= '4')
				(*count)++;
			str++;
		}
		else
			return (0);
	}
	return (1);
}

/*
**	func : mapping function
**
**	@param int **input	:	ft_sky_scrapper's input
**	@param char *str 	:	input string
*/

void	ft_mapping(int **input, char *str)
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		input[i] = (int *)malloc(sizeof(int) * 4);
		while (++j < 4)
		{
			while (*str)
			{
				if (ft_is_space(*str))
					str++;
				else if (*str >= '1' && *str <= '4')
				{
					input[i][j] = *str - '0';
					str++;
					break ;
				}
			}
		}
	}
}

int		**ft_preprocessing(char *str)
{
	char	*cp;
	int		count;
	int		**res;

	count = 0;
	while (ft_is_space(*str))
		str++;
	if (!(ft_is_valid_num(str, &count)))
		return (0);
	if (count != 16)
		return (0);
	cp = str;
	res = (int **)malloc(sizeof(int*) * 4);
	ft_mapping(res, cp);
	return (res);
}
