/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keys.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 20:33:10 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 22:04:48 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_key_use(void)
{
	int		max_x;
	int		max_y;
	int		key;

	max_x = 0;
	max_y = 0;
	while (1)
	{
		clear();
		initscr();
		noecho();
		getmaxyx(stdscr, max_y, max_x);
		ft_print_menu_key(max_x, max_y);
		keypad(stdscr, TRUE);
		key = getch();
		if (key == '1' || key == '0' || key == 27 || key == '2')
		{
			endwin();
			clear();
			return (key);
		}
		refresh();
		endwin();
	}
}
