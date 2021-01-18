/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:39:23 by youcho            #+#    #+#             */
/*   Updated: 2020/01/23 20:39:31 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char p;
	char q;

	p = 'P';
	q = 'N';
	if (n >= 0)
	{
		write(1, &p, 1);
	}
	else if (n < 0)
	{
		write(1, &q, 1);
	}
}
