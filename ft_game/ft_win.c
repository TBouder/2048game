/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_win.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 21:30:47 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 22:02:55 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_win(void)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	getmaxyx(stdscr, y, x);
	clear();
	mvprintw(y / 2, (x / 2) - 5, " VICTORY !");
	mvprintw(y / 2 + 1, (x / 2) - 12, "~ Press a key to continue ~");
	getch();
	return (1);
}
