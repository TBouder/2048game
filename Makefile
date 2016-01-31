# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/30 01:23:49 by tbouder           #+#    #+#              #
#    Updated: 2016/01/31 22:40:09 by tbouder          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	game_2048

CC			= 	gcc
CFLAGS		= 	-Wall -Werror -Wextra

SRC 		= 	main.c ft_print/ft_print_grid_launch.c \
				ft_print/ft_print_cases.c ft_print/ft_print_frame.c \
				ft_print/ft_print_grid.c ft_print/ft_print_grid_small.c \
				ft_print/ft_print_colors.c ft_print/ft_print_colors_one.c \
				ft_print/ft_print_colors_two.c \
				\
				ft_moves/ft_numbers_top.c ft_moves/ft_numbers_right.c \
				ft_moves/ft_numbers_left.c ft_moves/ft_numbers_down.c \
				ft_moves/ft_mv_top.c ft_moves/ft_mv_down.c \
				ft_moves/ft_mv_left.c ft_moves/ft_mv_right.c \
				\
				ft_numbers/ft_starting_grid.c \
				ft_numbers/ft_add_number_per_turn.c \
				ft_numbers/ft_verif_neighborhood.c \
				\
				ft_menus/ft_menu.c ft_menus/ft_print_menu.c \
				ft_menus/ft_keys.c ft_menus/ft_print_menu_key.c \
				ft_menus/ft_print_name.c \
				\
				ft_game/ft_grid_size.c ft_game/ft_close.c \
				ft_game/ft_window.c ft_game/ft_key_select.c \
				ft_game/ft_key_select_input.c ft_game/ft_win.c \
				ft_game/ft_key_select_input_two.c \
				\
				ft_check_win_value.c

LIB			=	libft/libft.a -lncurses

OBJ			=	main.o ft_print_grid_launch.o \
				ft_print_cases.o ft_print_frame.o \
				ft_print_grid.o ft_print_grid_small.o \
				ft_print_colors.o ft_print_colors_one.o ft_print_colors_two.o \
				\
				ft_numbers_top.o ft_numbers_right.o ft_numbers_left.o \
				ft_numbers_down.o \
				ft_mv_top.o ft_mv_down.o ft_mv_left.o ft_mv_right.o \
				\
				ft_starting_grid.o ft_add_number_per_turn.o \
				ft_verif_neighborhood.o \
				\
				ft_menu.o ft_print_menu.o ft_keys.o ft_print_menu_key.o \
				ft_print_name.o \
				\
				ft_grid_size.o ft_close.o ft_window.o ft_key_select.o \
				ft_key_select_input.o ft_win.o ft_key_select_input_two.o \
				ft_check_win_value.o

HEADER 		=	libft/libft.h ft_game.h

all: $(NAME)

.SILENT : $(NAME)
$(NAME):
	cd libft/ && $(MAKE)
	$(CC) $(CFLAGS) -c $(HEADER) $(SRC)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

.SILENT : clean
clean:
	cd libft/ && $(MAKE) clean
	rm -f $(OBJ)
	rm -f *.gch

.SILENT : fclean
fclean: clean
	cd libft/ && $(MAKE) fclean
	rm -f $(NAME)

re: fclean all
