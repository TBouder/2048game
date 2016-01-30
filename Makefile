# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/30 01:23:49 by tbouder           #+#    #+#              #
#    Updated: 2016/01/30 08:59:20 by tbouder          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	game_2048

CC			= 	gcc
CFLAGS		= 	-Wall -Werror -Wextra

SRC 		= 	main.c ft_print/ft_print_grid_launcher.c \
				ft_print/ft_print_cases.c ft_print/ft_print_frame.c \
				ft_print/ft_print_grid.c ft_print/ft_print_grid_small.c \
				ft_top/ft_move_top.c ft_top/ft_combine_numbers_top.c \
				ft_down/ft_move_down.c ft_down/ft_combine_numbers_down.c \
				ft_left/ft_move_left.c ft_left/ft_combine_numbers_left.c \
				ft_right/ft_move_right.c ft_right/ft_combine_numbers_right.c

LIB			=	libft/libft.a -lncurses

OBJ			=	main.o ft_print_grid_launcher.o \
				ft_print_cases.o ft_print_frame.o \
				ft_print_grid.o ft_print_grid_small.o \
				ft_move_top.o ft_combine_numbers_top.o \
				ft_move_down.o ft_combine_numbers_down.o \
				ft_move_left.o ft_combine_numbers_left.o \
				ft_move_right.o ft_combine_numbers_right.o

HEADER 		=	libft/libft.h ft_game.h

all: $(NAME)

.SILENT : $(NAME)
$(NAME):
	# cd libft/ && $(MAKE)
	$(CC) $(CFLAGS) -c $(HEADER) $(SRC)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

.SILENT : clean
clean:
	# cd libft/ && $(MAKE) clean
	rm -f $(OBJ)
	rm -f *.gch

.SILENT : fclean
fclean: clean
	# cd libft/ && $(MAKE) fclean
	rm -f $(NAME)

re: fclean all
