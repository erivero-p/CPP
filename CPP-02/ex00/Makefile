# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 13:16:08 by erivero-          #+#    #+#              #
#    Updated: 2024/01/30 15:03:15 by erivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

GREEN		=	\033[0;32m
RED			=	\033[0;31m
END			=	\033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -o $@ $(OBJ)
	@echo "$(GREEN)$(NAME) compiled$(END)";
%.o: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "$(RED)compiled objects have been removed$(END)"

fclean:	clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) cleaned$(END)"


re: fclean all

.PHONY: all clean fclean re