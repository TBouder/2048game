/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 06:24:10 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 06:40:35 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_move_down(int *grid, int g_size)
{
	int		i;
	int		j;

	i = g_size * g_size;
	j = 0;
	while (i - g_size >= 0 && j < g_size)
	{
		if (grid[i] == 0 && grid[i - g_size] != 0)
		{
			grid[i] = grid[i - g_size];
			grid[i - g_size] = 0;
		}
		i--;
		if (i - g_size == -1)
		{
			i = g_size * g_size;
			j++;
		}
	}	
}
