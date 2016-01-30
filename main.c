/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:18:09 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 20:43:21 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

int		*ft_size_grid(int g_size, int *grid)
{
	if (g_size == 4)
		grid = ft_nbrnew(16);
	if (g_size == 5)
		grid = ft_nbrnew(25);
	return (grid);
}

int		ft_key_select(int *grid)
{
	int		key;
	int		r;

	keypad(stdscr, TRUE);
	r = 0;
	key = getch();
	if (key == 27)
		return (1);
	key == KEY_UP ? r = ft_numbers_top(4, grid, 0, 4) : 0;
	key == KEY_DOWN ? r = ft_numbers_down(4, grid, 0, 4) : 0;
	key == KEY_LEFT ? r = ft_numbers_left(4, grid, 0, 4) : 0;
	key == KEY_RIGHT ? r = ft_numbers_right(4, grid, 0, 4) : 0;
	if (r)
	{
		ft_add_number_per_turn(4, grid);
		if (ft_verif_neighborhood(4, grid) == 0)
			return (2);
	}
	return (0);
}

int		ft_close(int g_size, int *grid, int id)
{
	if (id == 1)
		//TOUCHE ESCAPE
	if (id == 2)
		//PLUS DE POSSIBILITE DE MOVE
	if (id == 3)
		//VICTORY
}

int main()
{
	int		*grid;
	int		max_x;
	int		max_y;
	int		end;

	max_x = 0;
	max_y = 0;
	grid = ft_size_grid(4, NULL);
	ft_starting_grid(4, grid);
	while (1)
	{
		clear();
		initscr();
		noecho();
		getmaxyx(stdscr, max_y, max_x);
		ft_print_grid_launch(4, grid, max_x, max_y);
		if ((end = ft_key_select(grid)) != 0)
		{
			ft_close(g_size, grid, end);
			endwin();
			return (0);
		}
		refresh();
		endwin();
	}
	return 0;
}