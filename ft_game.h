/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 01:21:32 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/30 06:38:28 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GAME_H
# define FT_GAME_H

# include <ncurses.h>
# include <time.h>
# include <stdlib.h>
# include "libft/libft.h"

void		ft_print_grid_launcher(int g_size, int *grid, int max_x, int max_y);
void		ft_print_cases(int g_size, int max_x, int max_y);
void		ft_print_frame(int max_x, int max_y);
void		ft_print_grid(int g_size, int *grid, int max_x, int max_y);
void		ft_print_grid_small(int g_size, int *grid);

void		ft_combine_numbers_top(int g_size, int *grid);
void		ft_move_top(int *grid, int g_size);

void		ft_combine_numbers_down(int g_size, int *grid);
void		ft_move_down(int *grid, int g_size);

void		ft_combine_numbers_left(int g_size, int *grid);
void		ft_move_left(int *grid, int g_size);

void		ft_combine_numbers_right(int g_size, int *grid);
void		ft_move_right(int *grid, int g_size);

#endif
