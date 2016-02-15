/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 21:02:55 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 21:33:34 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_close(int id)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	getmaxyx(stdscr, y, x);
	clear();
	refresh();
	if (x > 40)
	{
		id == 1 ? mvprintw(y / 2, 0, "Thank you for playing ") : 0;
		id == 2 ? mvprintw(y / 2, (x / 2) - 19,
			"End of Game : No action available") : 0;
	}
	else
	{
		id == 1 ? mvprintw(y / 2, (x / 2) - 5, " Thank you") : 0;
		id == 2 ? mvprintw(y / 2, (x / 2) - 6, " End of Game") : 0;
	}
	mvprintw(y / 2 + 1, (x / 2) - 12, "~ Press a key to leave ~");
	getch();
	return (0);
}
