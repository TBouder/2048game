/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combine_numbers_top.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 06:25:03 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 08:15:50 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_combine_numbers_top(int g_size, int *grid)
{
	int		i;
	int		j;

	i = 0;
	j = g_size;
	while (i + j < g_size * g_size)
	{
		while (j <= g_size * g_size)
		{
			if (grid[i + j] == grid[i])
			{
				grid[i] += grid[i + j];
				grid[i + j] = 0;
			}
			else if (grid[i + j] != 0 && grid[i + j] != grid[i])
				j = g_size * g_size;
			j += g_size;
		}
		j = g_size;
		i++;
	}
	ft_move_top(grid, g_size);
}
