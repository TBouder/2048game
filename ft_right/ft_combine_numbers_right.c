/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combine_numbers_right.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 06:25:03 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 09:12:43 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_combine_numbers_right(int g_size, int *grid)
{
	int		i;
	int		j;

	i = g_size - 1;
	ft_move_right(grid, g_size);
	while (i <= g_size * g_size)
	{
		j = 0;
		while (j < 3)
		{
			if (grid[i - j] == grid[i - j - 1] && grid[i - j] != 0)
			{
				grid[i - j] += grid[i - j - 1];
				grid[i - j - 1] = 0;
			}		
			else
				j++;
		}
		i += g_size;
	}
	ft_move_right(grid, g_size);
}
