/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mv_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:41:02 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 13:20:56 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_mv_right(int g_size, int *grid, int r)
{
	int		i;
	int		y;

	i = 0;
	while (i < g_size * g_size)
	{
		y = i + 1;
		if (y >= g_size * g_size)
			return (r);
		if (y % g_size != 0 && grid[i] != 0 && grid[y] == 0)
		{
			grid[y] = grid[i];
			grid[i] = 0;
			r = 1;
		}
		i++;
	}
	return (r);
}
