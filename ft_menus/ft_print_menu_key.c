/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_menu_key.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 20:39:40 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 21:35:13 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_print_menu_key(int max_x, int max_y)
{
	if (max_y >= 30)
	{
		ft_print_name(max_x, max_y);
		mvprintw(21 + 3, (max_x / 2) - 10, "Play with WASD ==> 1");
		mvprintw(21 + 5, (max_x / 2) - 12, "Play with arrows ==> 2");
		mvprintw(21 + 7, (max_x / 2) - 5, "Quit ==> 0");
	}
	else
	{
		mvprintw(1, 0, "1 WASD | 2 arrows ==> 1 ~ 2");
		mvprintw(2, 0, "Quit ==> 0");
	}
}
