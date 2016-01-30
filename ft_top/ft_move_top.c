/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 06:24:10 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 06:27:33 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_move_top(int *grid, int g_size)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i + g_size < g_size * g_size && j < g_size)
	{
		if (grid[i] == 0 && grid[i + g_size] != 0)
		{
			grid[i] = grid[i + g_size];
			grid[i + g_size] = 0;
		}
		i++;
		if (i + g_size == g_size * g_size)
		{
			i = 0;
			j++;
		}
	}	
}
