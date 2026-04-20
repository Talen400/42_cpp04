NAME := brain
CC := c++
CFLAGS := -Wall -Werror -Wextra -std=c++98 -I.

SRC := main.cpp helpers.cpp Animal.cpp Dog.cpp Cat.cpp

OBJ := $(SRC:.cpp=.o)

HEADERS := helpers.h Animal.hpp Dog.hpp Cat.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

%.o:%.cpp $(HEADERS)
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
