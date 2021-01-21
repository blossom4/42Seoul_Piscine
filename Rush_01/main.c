/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 10:18:06 by sanam             #+#    #+#             */
/*   Updated: 2020/02/02 22:22:30 by sanam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		**ft_preprocessing(char *str);
int		ft_sky_scrapper(int **input);
int		ft_check_input(int **input);

/*
**	func : main
**
**	@param int argc 	: number of input string
**	@param char ** argv : array of string
**	@return int			: 0 (normal return)
**
**	if input value is not valid, Write "Error"
**	Or execute  "ft_sky_scrapper"
*/

int		main(int argc, char **argv)
{
	int result;
	int **input;
	int i;

	input = ft_preprocessing(argv[1]);
	if (argc != 2 || input == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!ft_check_input(input))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	result = ft_sky_scrapper(input);
	if (result == 0)
		write(1, "Error\n", 6);
	i = -1;
	while (++i < 4)
		free(input[i]);
	free(input);
	return (0);
}
