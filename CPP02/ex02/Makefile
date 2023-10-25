# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: douglas <douglas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 14:30:17 by douglas           #+#    #+#              #
#    Updated: 2023/10/25 14:30:57 by douglas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILES = Fixed main

SRC = $(addsuffix .cpp, $(SRC_FILES))
OBJ = $(addsuffix .o, $(SRC_FILES))

all: $(NAME)

$(NAME):	$(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@printf "Compiled\n"

clean:
	@$(RM) $(OBJ)
	@printf "Cleaned\n"
	
fclean: clean
	@rm -rf $(NAME)
	@printf "Cleaned\n"

re: fclean all

.PHONY: fclean, clean, all, re