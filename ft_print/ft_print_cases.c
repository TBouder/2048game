/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cases.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 01:36:28 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 02:42:09 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_cases(int g_size, int max_x, int max_y)
{
	int		i;
	int		x;
	int		y;

	i = 1;
	x = (max_x/g_size);
	y = 0;
	while (i < g_size)
	{
		while (++y < max_y)
			mvprintw(y, x, "|");
		y = 0;
		x += (max_x/g_size);
		i++;
	}


	i = 1;
	x = 0;
	y = (max_y/g_size);
	while (i < g_size )
	{
		while (++x < max_x)
			mvprintw(y, x, "-");
		x = 0;
		y += (max_y/g_size);
		i++;
	}
}
