/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_frame.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 01:36:02 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 02:33:01 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_frame(int max_x, int max_y)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (++x <= max_x)
	{
		mvprintw(max_y, x, "-");
		mvprintw(y, x, "-");
	}
	x = 0;
	while (++y <= max_y)
	{
		mvprintw(y, x, "|");
		mvprintw(y, max_x, "|");
	}
}
