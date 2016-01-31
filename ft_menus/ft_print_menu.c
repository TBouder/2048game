/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_menu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 20:35:42 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 22:05:06 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_game.h"

void	ft_print_menu(int max_x, int max_y)
{
	if (max_y >= 28)
	{
		ft_print_name(max_x, max_y);
		mvprintw(21 + 3, (max_x / 2) - 15, "Size between 2 and 9 ==> 2 ~ 9");
		mvprintw(21 + 5, (max_x / 2) - 5, "Quit ==> 0");
	}
	else
	{
		mvprintw(1, 0, "Grid size ==> 2 ~ 9");
		mvprintw(2, 0, "Quit ==> 0");
	}
}
