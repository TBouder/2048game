/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_colors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 11:16:33 by Tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 18:13:16 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void		ft_print_colors(int x, int y, int nb)
{
	start_color();
	init_pair(0, 1, 0);
	init_pair(1, 7, 0);
	init_pair(2, 2, 0);
	init_pair(3, 3, 0);
	init_pair(4, 4, 0);
	init_pair(5, 5, 0);
	init_pair(6, 6, 0);
	if (nb == 2 || nb == 4 || nb == 8 || nb == 16 || nb == 32 || nb == 64)
		ft_print_colors_one(x, y, nb);
	else if (nb == 128 || nb == 256 || nb == 512 || nb == 1024 || nb == 2048)
		ft_print_colors_two(x, y, nb);
	else
		mvprintw(y, x, "%d", nb);
}
