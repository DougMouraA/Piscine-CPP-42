# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: douglas <douglas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 18:56:58 by douglas           #+#    #+#              #
#    Updated: 2023/08/01 18:57:02 by douglas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILES = megaphone

SRC = $(addsuffix .cpp, $(SRC_FILES))
OBJ = $(addsuffix .o, $(SRC_FILES))

all: $(NAME)

$(NAME):	$(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)Compiled 😎\n"

clean:
	@$(RM) $(OBJ)
	@printf "$(GREEN)Cleaned 😎\n"
	
fclean: clean
	@rm -rf $(NAME)
	@printf "$(GREEN)Super Cleaned 😎\n"

re: fclean all

.PHONY: fclean, clean, all, re

GREEN=\033[0;32m
YELLOW=\033[0;33m