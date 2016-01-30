/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:18:09 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 08:59:30 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

int		*ft_grid(int g_size, int *grid)
{
	if (g_size == 4)
		grid = ft_nbrnew(16);
	if (g_size == 5)
		grid = ft_nbrnew(20);
	return (grid);
}

void	ft_starting_grid(int g_size, int *grid)
{
	time_t	t;   
	int		i;
	int		j;
	int		temp;

	j = 0;
	temp = -1;
	srand((unsigned) time(&t));
	while (j < 2)
	{
		while ((i = rand() % (g_size * g_size)) == temp)
			;
		printf("%d\n", i); //
		grid[i] = rand() % 2 == 0 ? 2 : 4;
		temp = i;
		j++; 
	}
}

void	ft_add_number_per_turn(int g_size, int *grid)
{
	time_t	t;   
	int		i;

	srand((unsigned) time(&t));
	while (grid[(i = rand() % (g_size * g_size))] != 0)
		;
	grid[i] = rand() % 2 == 0 ? 2 : 4;
}

int main()
{
	int		*grid;
	int		i;
	int		max_x;
	int		max_y;
	int		key;

	max_x = 0;
	max_y = 0;
	i = 0;
	
	grid = ft_grid(4, NULL);
	ft_starting_grid(4, grid);
	while (1)
	{
		clear();
		initscr();			/* Start curses mode 		  */
		noecho();
		getmaxyx(stdscr, max_y, max_x);
		ft_print_grid_launcher(4, grid, max_x, max_y);
		refresh();			/* Print it on to the real screen */
		keypad(stdscr, TRUE);
		key = getch();
		if (key == KEY_UP)
			ft_combine_numbers_top(4, grid);
		if (key == KEY_DOWN)
			ft_combine_numbers_down(4, grid);
		if (key == KEY_LEFT)
			ft_combine_numbers_left(4, grid);
		if (key == KEY_RIGHT)
			ft_combine_numbers_right(4, grid);
		if (key == 27)
		{
			return (0);
		}
		ft_add_number_per_turn(4, grid);


		endwin();			/* End curses mode		  */
	}

	return 0;
}