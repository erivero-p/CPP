# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 13:16:08 by erivero-          #+#    #+#              #
#    Updated: 2024/01/23 15:24:01 by erivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -o $@ $(OBJ)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re