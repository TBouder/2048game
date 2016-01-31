/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 01:21:32 by tbouder           #+#    #+#             */
/*   Updated: 2016/01/31 22:39:48 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GAME_H
# define FT_GAME_H

# include <ncurses.h>
# include <time.h>
# include <stdlib.h>
# include "libft/libft.h"

enum	e_const
{
	WIN_VALUE = 2048
};

void		ft_print_grid_launch(int g_size, int *grid, int max_x, int max_y);
void		ft_print_cases(int g_size, int max_x, int max_y);
void		ft_print_frame(int max_x, int max_y);
void		ft_print_grid(int g_size, int *grid, int max_x, int max_y);
void		ft_print_grid_small(int g_size, int *grid);

int			ft_numbers_top(int g_size, int *grid, int r);
int			ft_numbers_down(int g_size, int *grid, int r);
int			ft_numbers_left(int g_size, int *grid, int r);
int			ft_numbers_right(int g_size, int *grid, int r);
int			ft_mv_top(int g_size, int *grid, int r);
int			ft_mv_down(int g_size, int *grid, int r);
int			ft_mv_left(int g_size, int *grid, int r);
int			ft_mv_right(int g_size, int *grid, int r);

void		ft_starting_grid(int g_size, int *grid);
void		ft_add_number_per_turn(int g_size, int *grid);
int			ft_verif_neighborhood(int g_size, int *grid);

void		ft_print_colors(int x, int y, int nb);
void		ft_print_colors_one(int x, int y, int nb);
void		ft_print_colors_two(int x, int y, int nb);

char		ft_menu(char c);
void		ft_print_name(int max_x, int max_y);
void		ft_print_menu(int max_x, int max_y);
void		ft_print_menu_key(int max_x, int max_y);
int			ft_key_use(void);

int			ft_grid_size(char c);
int			ft_close(int id);
int			ft_window(int g_size, int *grid, int key, int win);

int			ft_key_select(int g_size, int *grid, int usage_key, int win);
int			ft_key_select_input(int g_size, int *grid, int usage_key, int *key);
int			ft_key_select_input_two(int g_size, int *grid, int r, int *key);

int			ft_win(void);
int			ft_check_win_value(int nb, int r);

#endif
