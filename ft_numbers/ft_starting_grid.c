/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_starting_grid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 12:36:37 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 12:39:44 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_starting_grid(int g_size, int *grid)
{
	time_t	t;   
	int		i;
	int		j;
	int		temp;

	j = 0;
	temp = -1;
	srand((unsigned) time(&t));
	while (j < 2)
	{
		while ((i = rand() % (g_size * g_size)) == temp)
			;
		printf("%d\n", i); //
		grid[i] = rand() % 2 == 0 ? 2 : 4;
		temp = i;
		j++; 
	}
}
