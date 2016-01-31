/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_number_per_turn.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:40:32 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 17:49:57 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_add_number_per_turn(int g_size, int *grid)
{
	time_t	t;
	int		i;

	srand((unsigned)time(&t));
	while (grid[(i = rand() % (g_size * g_size))] != 0)
		;
	grid[i] = rand() % 2 == 0 ? 2 : 4;
}
