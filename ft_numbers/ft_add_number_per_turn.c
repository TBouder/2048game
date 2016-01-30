/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_number_per_turn.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 19:40:32 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 19:40:50 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_add_number_per_turn(int g_size, int *grid)
{
	time_t	t;   
	int		i;

	srand((unsigned) time(&t));
	while (grid[(i = rand() % (g_size * g_size))] != 0)
		;
	grid[i] = rand() % 2 == 0 ? 2 : 4;
}
