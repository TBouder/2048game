/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 01:21:32 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 00:15:51 by Tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GAME_H
# define FT_GAME_H

# include <ncurses.h>
# include <time.h>
# include <stdlib.h>
# include "libft/libft.h"

enum e_const
{
	WIN_VALUE = 2048
};

void		ft_print_grid_launch(int g_size, int *grid, int max_x, int max_y);
void		ft_print_cases(int g_size, int max_x, int max_y);
void		ft_print_frame(int max_x, int max_y);
void		ft_print_grid(int g_size, int *grid, int max_x, int max_y);
void		ft_print_grid_small(int g_size, int *grid);

int			ft_numbers_top(int g_size, int *grid, int r, int k);
int			ft_numbers_down(int g_size, int *grid, int r, int k);
int			ft_numbers_left(int g_size, int *grid, int r, int k);
int			ft_numbers_right(int g_size, int *grid, int r, int k);

void		ft_starting_grid(int g_size, int *grid);
void		ft_add_number_per_turn(int g_size, int *grid);

void		ft_print_colors(int x, int y, int nb);

int			ft_verif_neighborhood(int g_size, int *grid);

#endif
