/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 01:27:42 by chray             #+#    #+#             */
/*   Updated: 2016/01/31 21:00:55 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

char	ft_menu(char c)
{
	int		max_x;
	int		max_y;

	max_x = 0;
	max_y = 0;
	while (1)
	{
		clear();
		initscr();
		noecho();
		getmaxyx(stdscr, max_y, max_x);
		ft_print_menu(max_x, max_y);
		keypad(stdscr, TRUE);
		c = getch();
		if ((c >= '2' && c <= '9') || c == '0' || c == 27)
		{
			endwin();
			clear();
			return (c);
		}
		refresh();
		endwin();
	}
}
