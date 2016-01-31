/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 06:25:03 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 13:21:54 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_numbers_top(int g_size, int *grid, int r)
{
	int		i;
	int		y;

	r = ft_mv_top(g_size, grid, r);
	r = ft_mv_top(g_size, grid, r);
	i = 0;
	while (i + g_size < g_size * g_size)
	{
		y = i + g_size;
		if (grid[i] == grid[y] && grid[i] != 0)
		{
			grid[i] += grid[y];
			grid[y] = 0;
			r = 1;
		}
		i++;
	}
	r = ft_mv_top(g_size, grid, r);
	return (r);
}