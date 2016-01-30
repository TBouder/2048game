/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 06:25:03 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 19:37:33 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_numbers_top(int g_size, int *grid, int r, int k)
{
	int		i;
	int		y;

	while (k--)
	{
		i = 0;
		while (i + g_size < g_size * g_size)
		{
			y = i + g_size;
			if (grid[i] == 0 && grid[y] != 0)
			{
				grid[i] = grid[y];
				grid[y] = 0;
				r = 1;
			}
			else if (grid[i] == grid[y] && grid[i] != 0)
			{
				grid[i] += grid[y];
				grid[y] = 0;
				r = 1;
			}
			i++;
		}
	}
	return (r);
}