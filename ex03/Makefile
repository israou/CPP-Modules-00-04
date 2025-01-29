NAME = IMateria

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC =	main.cpp \
		AMateria.cpp \
		MateriaSource.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \
		

OBJ =  $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@($(CPP) $(OBJ) $(CFLAGS) -o $(NAME))
	@echo "✅ $(NAME) is ready !"

%.o : %.cpp AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
	@($(CPP) $(CFLAGS) -c $< -o $@)

clean:
	@echo "🧹Removing object files..."
	@($(RM) $(OBJ))

fclean: clean
	@echo "🧹 Removing the executable $(NAME)..."
	@($(RM) $(NAME))

re: fclean all

.PHONY: clean fclean re all