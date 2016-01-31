/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 21:02:50 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 22:03:50 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_window(int g_size, int *grid, int key, int win)
{
	int		max_x;
	int		max_y;
	int		end;

	max_x = 0;
	max_y = 0;
	while (1)
	{
		clear();
		initscr();
		noecho();
		getmaxyx(stdscr, max_y, max_x);
		ft_print_grid_launch(g_size, grid, max_x, max_y);
		if ((end = ft_key_select(g_size, grid, key, win)) == 1 || end == 2)
		{
			ft_close(end);
			endwin();
			return (0);
		}
		if (win == 0 && end == 3)
			win = ft_win();
		refresh();
		endwin();
	}
	return (1);
}
