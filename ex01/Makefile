CC		= c++ -Wall -Wextra -Werror
RM		= rm -rf
FILES	= main PhoneBook Contact
INCLUDS = PhoneBook.hpp Contact.hpp
SRC		= $(FILES:=.cpp)
OBJ		= $(FILES:=.o)
NAME	= PhoneBook
GREEN 	= \x1b[42m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDS)
	@$(CC) $(OBJ) -o $(NAME)
	@printf " $(GREEN) SUCCESS\n"

%.o: %.c $(INCLUDS)
	@$(CC) -c $< -o $@

clean:
	@ $(RM) $(OBJ)

fclean: clean
	@ $(RM) $(NAME)
	
re: fclean all
