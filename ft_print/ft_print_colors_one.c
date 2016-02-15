/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_colors_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 18:12:37 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 18:13:04 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_colors_one(int x, int y, int nb)
{
	if (nb == 2)
		attron(COLOR_PAIR(1));
	else if (nb == 4)
		attron(COLOR_PAIR(2));
	else if (nb == 8)
		attron(COLOR_PAIR(3));
	else if (nb == 16)
		attron(COLOR_PAIR(4));
	else if (nb == 32)
		attron(COLOR_PAIR(5));
	else if (nb == 64)
		attron(COLOR_PAIR(6));
	mvprintw(y, x, "%d", nb);
	attron(COLOR_PAIR(1));
}
