/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_neighborhood.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 20:27:26 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 20:30:43 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_verif_neighborhood(int g_size, int *grid)
{
	int		i;

	i = 0;
	while (i < g_size * g_size)
	{
		if (grid[i] == 0)
			return (1);
		else if (grid[i] == grid[i + 1] || grid[i] == grid[i - 1]
			|| grid[i] == grid[i - g_size] || grid[i] == grid[i + g_size])
			return (1);
		i++;
	}
	return (0);
}