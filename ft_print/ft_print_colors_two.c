/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_colors_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 18:12:41 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 18:13:21 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_colors_two(int x, int y, int nb)
{
	if (nb == 128)
		attron(COLOR_PAIR(2));
	else if (nb == 256)
		attron(COLOR_PAIR(3));
	else if (nb == 512)
		attron(COLOR_PAIR(4));
	else if (nb == 1024)
		attron(COLOR_PAIR(5));
	else if (nb == 2048)
		attron(COLOR_PAIR(6));
	mvprintw(y, x, "%d", nb);
	attron(COLOR_PAIR(1));
}
