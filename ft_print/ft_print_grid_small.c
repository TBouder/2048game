/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid_small.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 02:56:00 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 19:52:25 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_grid_small(int g_size, int *grid)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	k = ft_nbrlen(ft_nbrlargest(grid, g_size * g_size));
	while ((i - 1) < (g_size * g_size))
	{
		j = 0;
		if (grid[i - 1] != 0)
		{
			printw(" %d ", grid[i - 1]);
			while (j++ < k - ft_nbrlen(grid[i - 1]))
				printw(" ");
		}
		else
		{
			while (j++ < k + 2)
				printw(" ");
		}
		(i % g_size == 0 && i != 0) ? printw("\n") : printw("|");
		i++;
	}
}
