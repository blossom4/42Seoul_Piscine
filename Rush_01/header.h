/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 17:05:51 by sanam             #+#    #+#             */
/*   Updated: 2020/02/02 17:29:47 by sanam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

int		**ft_preprocessing(char *str);
int		ft_sky_scrapper(int **input);
int		ft_check_input(int **input);
int		ft_check_condition(int stage[16], int **input);
int		ft_col_overlap(int stage[16]);
int		ft_row_overlap(int stage[16]);
void	ft_build_tower(int stage[16], int loc, int height);
void	ft_destroy_tower(int stage[16], int loc);
void	ft_col_up_setting(int stage[16], int *col_up, int *col_down);
void	ft_col_down_setting(int stage[16], int *col_down, int *col_up);
void	ft_row_left_setting(int stage[16], int *row_left, int *row_right);
void	ft_row_right_setting(int stage[16], int *row_right, int *row_left);
void	ft_recursive(int stage[16], int loc, int **input, int *error);

#endif
