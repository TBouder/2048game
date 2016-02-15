/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cases.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 01:36:28 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 18:03:02 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_cases(int g_size, int max_x, int max_y)
{
	int		i;
	int		x;
	int		y;

	i = 1;
	x = (max_x / g_size);
	while (i < g_size)
	{
		y = 0;
		while (++y < max_y)
			mvprintw(y, x, "|");
		x += (max_x / g_size);
		i++;
	}
	i = 1;
	y = (max_y / g_size);
	while (i < g_size)
	{
		x = 0;
		while (++x < max_x)
			mvprintw(y, x, "-");
		y += (max_y / g_size);
		i++;
	}
}
