/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:18:09 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 22:44:12 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_game.h"

int		main(void)
{
	char	c;
	int		key;
	int		*grid;
	int		g_size;

	c = 0;
	if (ft_check_win_value(WIN_VALUE, 0) == 0)
	{
		ft_putendl("WIN_VALUE is not valid");
		return (1);
	}
	c = ft_menu(c);
	g_size = ft_grid_size(c);
	key = (c != 48 && c != 27) ? ft_key_use() : 0;
	if ((c != 48 && c != 27) && (key != 27 && key != 48))
	{
		grid = ft_nbrnew(ft_power(g_size, g_size));
		ft_starting_grid(g_size, grid);
		ft_window(g_size, grid, key, 0);
		free(grid);
		grid = NULL;
	}
	return (0);
}
