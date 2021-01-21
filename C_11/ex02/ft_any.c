/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 11:20:40 by youcho            #+#    #+#             */
/*   Updated: 2020/02/12 11:20:44 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) != 0)
		{
			res = 1;
			break ;
		}
		i++;
	}
	return (res);
}