/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_select_input_two.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 22:01:29 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 22:04:30 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

int		ft_key_select_input_two(int g_size, int *grid, int r, int *key)
{
	*key == 'w' ? r = ft_numbers_top(g_size, grid, 0) : 0;
	*key == 's' ? r = ft_numbers_down(g_size, grid, 0) : 0;
	*key == 'a' ? r = ft_numbers_left(g_size, grid, 0) : 0;
	*key == 'd' ? r = ft_numbers_right(g_size, grid, 0) : 0;
	return (r);
}
