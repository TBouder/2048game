/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_grid_launch.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 01:35:24 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 19:31:08 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_print_grid_launch(int g_size, int *grid, int max_x, int max_y)
{
	if (max_y <= 8)
		ft_print_grid_small(g_size, grid);
	else
	{
		max_y -= (max_y % g_size) == 0 ? 4 : (max_y % g_size);
		max_x -= (max_x % g_size) == 0 ? 4 : (max_x % g_size);
		ft_print_grid(g_size, grid, max_x, max_y);
		ft_print_cases(g_size, max_x, max_y);
		ft_print_frame(max_x, max_y);
	}
}
