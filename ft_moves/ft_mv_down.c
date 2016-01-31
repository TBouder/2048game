/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mv_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:40:50 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 12:43:42 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_mv_down(int g_size, int *grid, int r)
{
	int		i;
	int		y;

	i = 0;
	while (i < g_size * g_size)
	{
		y = i + g_size;
		if (y >= g_size * g_size)
			return (r);
		if (grid[i] != 0 && grid[y] == 0)
		{
			grid[y] = grid[i];
			grid[i] = 0;
			r = 1;
		}
		i++;
	}
	return (r);
}
