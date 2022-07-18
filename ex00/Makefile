CC		= c++ -Wall -Wextra -Werror
RM		= rm -rf
FILES	= megaphone
SRC		= $(FILES:=.cpp)
OBJ		= $(FILES:=.o)
NAME	= megaphone
GREEN 	= \x1b[42m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@ $(CC) $(SRC) -o $(NAME)
	@printf " $(GREEN) SUCCESS\n"
clean:
	@ $(RM) $(OBJ)
fclean: clean
	@ $(RM) $(NAME)
re: fclean all
