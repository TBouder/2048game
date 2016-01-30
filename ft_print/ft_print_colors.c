/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_colors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 11:16:33 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 19:14:27 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_colors(int x, int y, int nb)
{
	start_color();
	init_pair(0, 1, 0);
	init_pair(1, 7, 0);
	init_pair(2, 2, 0);
	init_pair(3, 3, 0);
	init_pair(4, 4, 0);
	init_pair(5, 5, 0);
	init_pair(6, 6, 0);

	if (nb == 2)
	{
		attron(COLOR_PAIR(1));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 4)
	{
		attron(COLOR_PAIR(2));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 8)
	{
		attron(COLOR_PAIR(3));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 16)
	{
		attron(COLOR_PAIR(4));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 32)
	{
		attron(COLOR_PAIR(5));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 64)
	{
		attron(COLOR_PAIR(6));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 128)
	{
		attron(COLOR_PAIR(2));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 256)
	{
		attron(COLOR_PAIR(3));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 512)
	{
		attron(COLOR_PAIR(4));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 1024)
	{
		attron(COLOR_PAIR(5));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else if (nb == 2048)
	{
		attron(COLOR_PAIR(6));
		mvprintw(y, x, "%d", nb);
		attron(COLOR_PAIR(1));
	}
	else
		mvprintw(y, x, "%d", nb);
}