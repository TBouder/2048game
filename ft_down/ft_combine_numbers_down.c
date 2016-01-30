/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combine_numbers_down.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 06:25:03 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 06:40:13 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_combine_numbers_down(int g_size, int *grid)
{
	int		i;
	int		j;

	i = g_size * g_size;
	j = g_size;
	while (i - j >= 0)
	{
		while (j <= 16)
		{
			if (grid[i - j] == grid[i])
			{
				grid[i] += grid[i - j];
				grid[i - j] = 0;
			}
			else if (grid[i - j] != 0 && grid[i - j] != grid[i])
				j = 16;
			j += g_size;
		}
		j = g_size;
		i--;
	}
	ft_move_down(grid, g_size);
}
