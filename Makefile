# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Tbouder <Tbouder@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/30 01:23:49 by tbouder           #+#    #+#              #
#    Updated: 2016/01/31 13:00:46 by Tbouder          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	game_2048

CC			= 	gcc
CFLAGS		= 	-Wall -Werror -Wextra

SRC 		= 	main.c ft_print/ft_print_grid_launch.c \
				ft_print/ft_print_cases.c ft_print/ft_print_frame.c \
				ft_print/ft_print_grid.c ft_print/ft_print_grid_small.c \
				ft_print/ft_print_colors.c \
				\
				ft_moves/ft_numbers_top.c ft_moves/ft_numbers_right.c \
				ft_moves/ft_numbers_left.c ft_moves/ft_numbers_down.c \
				ft_moves/ft_mv_top.c ft_moves/ft_mv_down.c \
				ft_moves/ft_mv_left.c ft_moves/ft_mv_right.c \
				\
				ft_numbers/ft_starting_grid.c \
				ft_numbers/ft_add_number_per_turn.c \
				ft_numbers/ft_verif_neighborhood.c

LIB			=	libft/libft.a -lncurses

OBJ			=	main.o ft_print_grid_launch.o \
				ft_print_cases.o ft_print_frame.o \
				ft_print_grid.o ft_print_grid_small.o \
				ft_numbers_top.o \
				ft_numbers_right.o \
				ft_numbers_left.o \
				ft_numbers_down.o \
				ft_print_colors.o ft_starting_grid.o ft_add_number_per_turn.o \
				ft_verif_neighborhood.o \
				ft_mv_top.o ft_mv_down.o ft_mv_left.o ft_mv_right.o \

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
