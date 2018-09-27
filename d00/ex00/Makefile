# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmalpart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/27 02:14:08 by gmalpart          #+#    #+#              #
#    Updated: 2018/09/27 02:16:10 by gmalpart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

CPP			= g++
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

SRC			= megaphone.cpp

OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(OBJ_COLOR)$(CPP) $(CFLAGS) -o $@ -c $<$(NO_COLOR)

clean:
	@rm -f $(OBJ)
	@printf "Cleaning up $(NAME) objects...\n"

fclean: clean
	@rm -f $(NAME)
	@printf "Cleaning up $(NAME)...\n"

re: fclean all

.PHONY: clean fclean all re
