/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 06:24:10 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 08:01:49 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_move_left(int *grid, int g_size)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i <= g_size * g_size && k < g_size)
	{
		j = 0;
		while (j < 3)
		{
			if (grid[i + j] == 0 && grid[i + j + 1] != 0)
			{
				grid[i + j] = grid[i + j + 1];
				grid[i + j + 1] = 0;
			}		
			else
				j++;
		}
		i += g_size;
		if (i > g_size * g_size)
		{
			i = 0;
			k++;
		}
	}
}
