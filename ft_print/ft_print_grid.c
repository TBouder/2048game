/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 01:36:54 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 17:52:10 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_grid(int g_size, int *grid, int max_x, int max_y)
{
	int		i;
	int		x;
	int		y;

	i = 1;
	x = (max_x / g_size) / 2;
	y = (max_y / g_size) / 2;
	while ((i - 1) < (g_size * g_size))
	{
		if (grid[i - 1] != 0)
			ft_print_colors(x, y, grid[i - 1]);
		else
			mvprintw(y, x, " ");
		x += (max_x / g_size);
		if (i % g_size == 0 && i != 0)
		{
			mvprintw(y, x, "\n");
			y += (max_y / g_size);
			x = (max_x / g_size) / 2;
		}
		i++;
	}
}
