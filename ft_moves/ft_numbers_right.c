/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_right.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 06:25:03 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 19:37:41 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_numbers_right(int g_size, int *grid, int r, int k)
{
	int		i;
	int		y;

	while (k--)
	{
		i = g_size * g_size;
		while (i > 0)
		{
			y = i - 1;
			if (y % g_size != 4 && grid[i] == 0 && grid[y] != 0)
			{
				grid[i] = grid[y];
				grid[y] = 0;
				r = 1;
			}
			else if (y % g_size != 4 && grid[i] == grid[y] && grid[i] != 0)
			{
				grid[i] += grid[y];
				grid[y] = 0;
				r = 1;
			}
			i--;
		}
	}
	return (r);
}
