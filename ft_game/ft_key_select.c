/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_select.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 21:08:13 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 21:58:59 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_key_select(int g_size, int *grid, int usage_key, int win)
{
	int		key;
	int		r;

	keypad(stdscr, TRUE);
	r = 0;
	key = getch();
	if (key == 27)
		return (1);
	if (usage_key == 50)
		r = ft_key_select_input(g_size, grid, r, &key);
	else
		r = ft_key_select_input_two(g_size, grid, r, &key);
	if (win == 0 && ft_nbrlargest(grid, g_size * g_size) == WIN_VALUE)
		return (3);
	(r != 0) ? ft_add_number_per_turn(g_size, grid) : 0;
	if (ft_verif_neighborhood(g_size, grid) == 0)
		return (2);
	return (0);
}
