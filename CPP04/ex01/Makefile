# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: douglas <douglas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 17:57:39 by douglas           #+#    #+#              #
#    Updated: 2023/11/09 21:44:07 by douglas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILES = Animal \
			Dog \
			Cat \
			Brain \
			main 

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