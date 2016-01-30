/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid_small.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 02:56:00 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 03:50:49 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_grid_small(int g_size, int *grid)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = ft_nbrlen(ft_nbrlargest(grid, g_size * g_size));
	while ((i - 1) < (g_size * g_size))
	{
		if (grid[i - 1] != 0)
			printw(" %d ", grid[i - 1]);
		else
		{
			printw(" ");
			while (j++ < k)
				printw(" ");
			printw(" ");
		}

		if (i % g_size == 0 && i != 0)
			printw("\n");
		else
			printw("|");
		j = 0;
		i++;
	}
}
