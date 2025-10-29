NAME = Fixed

SRC = src/main.cpp \
	src/Fixed.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

.c.o:
	@$(CXX) $(FLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re