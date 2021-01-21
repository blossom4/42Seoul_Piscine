/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjeong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:05:06 by yjeong            #+#    #+#             */
/*   Updated: 2020/02/09 21:26:21 by hyejo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASH_H
# define HASH_H

# define T_SIZE 37

struct				s_word
{
	char			*number;
	char			*english;
	struct s_word	*next;
};

struct				s_table
{
	struct s_word	*head;
};

#endif
