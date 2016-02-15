/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_select_input.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 21:09:28 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 22:02:14 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_key_select_input(int g_size, int *grid, int r, int *key)
{
	*key == KEY_UP ? r = ft_numbers_top(g_size, grid, 0) : 0;
	*key == KEY_DOWN ? r = ft_numbers_down(g_size, grid, 0) : 0;
	*key == KEY_LEFT ? r = ft_numbers_left(g_size, grid, 0) : 0;
	*key == KEY_RIGHT ? r = ft_numbers_right(g_size, grid, 0) : 0;
	return (r);
}
