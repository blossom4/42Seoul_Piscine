/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 21:08:55 by youcho            #+#    #+#             */
/*   Updated: 2020/02/09 22:59:28 by yjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdbool.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "hash.h"

# define PATH_DICT "./dictionary/"

int				cut(char *str, struct s_table *table);
bool			str_cmp(char *str, char *dest);
int				str_len(char *str);
struct s_table	*init_table(void);
struct s_table	*insert_table(struct s_table *table, char *num, char *eng);
bool			search_table(struct s_table *table, char *str);
void			read_line(char *str, struct s_table *table);
void			print_value(char *str);
int				print_dict_display(char *file_path, struct s_table *table);
void			input_error_print(void);
void			insert_dict(char *dict, char *val);
struct s_table	*init_table(void);
void			dict_error_print(void);
void			ft_send_value(char *num, struct s_table *table);
char			*make_number(char *num);
char			*remove_zero(char *num);
int				is_error(char *str);
int				is_input_error(char *str);
#endif
