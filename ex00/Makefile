# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 18:09:27 by ichaabi           #+#    #+#              #
#    Updated: 2025/01/12 23:06:14 by ichaabi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@($(CPP) $(OBJ) $(CFLAGS) -o $(NAME))
	@echo "✅ $(NAME) is ready !"

%.o : %.cpp
	@($(CPP) $(CFLAGS) -c $< -o $@)

clean:
	@echo "🧹Removing object files..."
	@($(RM) $(OBJ))

fclean: clean
	@echo "🧹 Removing the executable $(NAME)..."
	@($(RM) $(NAME))

re: fclean all

.PHONY: clean fclean re all