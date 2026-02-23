NAME = Animal

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC =	Animal.cpp \
		main.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp \
		Brain.cpp

OBJ =  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@($(CPP) $(OBJ) $(CFLAGS) -o $(NAME))
	@echo "✅ $(NAME) is ready !"

%.o : %.cpp Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
	@($(CPP) $(CFLAGS) -c $< -o $@)

clean:
	@echo "🧹Removing object files..."
	@($(RM) $(OBJ))

fclean: clean
	@echo "🧹 Removing the executable $(NAME)..."
	@($(RM) $(NAME))

re: fclean all

.PHONY: clean fclean re all