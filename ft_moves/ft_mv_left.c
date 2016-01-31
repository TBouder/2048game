/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mv_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 12:40:57 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 13:02:41 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_mv_left(int g_size, int *grid, int r)
{
	int		i;
	int		y;

	i = (g_size * g_size) - 1;
	while (i >= 0)
	{
		y = i - 1;
		if (y < 0)
			return (r);
		if (i % g_size != 0 && grid[i] != 0 && grid[y] == 0)
		{
			grid[y] = grid[i];
			grid[i] = 0;
			r = 1;
		}
		i--;
	}
	return (r);
}
