/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:18:09 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 00:14:35 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"
#include <unistd.h>

int		ft_key_select(int g_size, int *grid)
{
	int		key;
	int		r;

	keypad(stdscr, TRUE);
	r = 0;
	key = getch();
	if (key == 27)
		return (1);
	key == KEY_UP ? r = ft_numbers_top(g_size, grid, 0, g_size) : 0;
	key == KEY_DOWN ? r = ft_numbers_down(g_size, grid, 0, g_size) : 0;
	key == KEY_LEFT ? r = ft_numbers_left(g_size, grid, 0, g_size) : 0;
	key == KEY_RIGHT ? r = ft_numbers_right(g_size, grid, 0, g_size) : 0;
	if (ft_nbrlargest(grid, g_size * g_size) == WIN_VALUE)
		return (3);
	if (r)
		ft_add_number_per_turn(g_size, grid);
	if (ft_verif_neighborhood(g_size, grid) == 0)
		return (2);
	return (0);
}

int		ft_close(int id)
{
	int		max_x;
	int		max_y;

	max_x = 0;
	max_y = 0;
	getmaxyx(stdscr, max_y, max_x);
	if (id == 1)
	{
		clear();
		mvprintw(max_y / 2, 0, "Thank you for playing ");
		refresh();
		sleep(2);
	}
	if (id == 2)
	{
		clear();
		refresh();
		mvprintw(max_y / 2, 0, "End of Game : No more action available \n ~Press a key to leave~");
		getch();
	}
	if (id == 3)
	{
		clear();
		mvprintw(max_y / 2, 0, "VICTORY !");
		refresh();
		sleep(2);
	}
	return (0);
}

int		ft_window(int g_size, int *grid)
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
		if ((end = ft_key_select(g_size, grid)) != 0)
		{
			ft_close(end);
			endwin();
			return (0);
		}
		refresh();
		endwin();
	}
	return (1);
}

int		main(int ac, char **av)
{
	int		*grid;
	int		g_size;

	g_size = (ac == 2) ? ft_atoi(av[1]) : 4;

	grid = ft_nbrnew(ft_power(g_size, g_size));
	ft_starting_grid(g_size, grid);
	ft_window(g_size, grid);
	return (0);
}