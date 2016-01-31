/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mv_top.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:40:46 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 13:02:51 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_mv_top(int g_size, int *grid, int r)
{
	int		i;
	int		y;

	i = (g_size * g_size) - 1;
	while (i >= 0)
	{
		y = i - g_size;
		if (y < 0)
			return (r);
		if (grid[i] != 0 && grid[y] == 0)
		{
			grid[y] = grid[i];
			grid[i] = 0;
			r = 1;
		}
		i--;
	}
	return (r);
}
