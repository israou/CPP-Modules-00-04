NAME = DiamondTrap

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC =	ClapTrap.cpp \
		main.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp

OBJ =  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@($(CPP) $(OBJ) $(CFLAGS) -o $(NAME))
	@echo "✅ $(NAME) is ready !"

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.cpp
	@($(CPP) $(CFLAGS) -c $< -o $@)

clean:
	@echo "🧹Removing object files..."
	@($(RM) $(OBJ))

fclean: clean
	@echo "🧹 Removing the executable $(NAME)..."
	@($(RM) $(NAME))

re: fclean all

.PHONY: clean fclean re all