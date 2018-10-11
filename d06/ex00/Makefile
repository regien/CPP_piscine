# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/27 02:14:08 by gmalpart          #+#    #+#              #
#    Updated: 2018/10/07 23:06:01 by gmalpart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_retro

CPP			= clang++
CFLAGS		= -Wall -Werror -Wextra
INC_FLAGS	= -I inc

# -g for lldb
DEBUG		= #-g

# Cosmetics Section:
OK_COLOR	= \033[38;5;105;1m
OBJ_COLOR	= \033[38;5;208m
COM_COLOR	= \033[38;5;200m
LIB_COLOR	= \033[1;32m
NO_COLOR	= \033[m


FILES		=	Bullet.cpp \
				Enemy.cpp \
				Entity.cpp \
				Game.cpp \
				Player.cpp \
				main.cpp


#FILES		= main.cpp

ADD_CLSS	= $(addprefix src/, $(FILES))
#SRC			= $(addprefix src/, $(FILES))
SRC			+= $(ADD_CLSS)

OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(INC_FLAGS) -o $(NAME) $(OBJ) -lncurses

%.o: %.cpp
	$(CPP) $(CFLAGS) $(INC_FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)
	@printf "Cleaning up $(NAME) objects...\n"

fclean: clean
	@rm -f $(NAME)
	@printf "Cleaning up $(NAME)...\n"

re: fclean all

.PHONY: clean fclean all re
