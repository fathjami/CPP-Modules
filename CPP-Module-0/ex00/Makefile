CC		= c++ -Wall -Wextra -Werror
RM		= rm -rf
FILES	= megaphone
SRC		= $(FILES:=.cpp)
OBJ		= $(FILES:=.o)
NAME	= megaphone
GREEN 	= \x1b[42m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@printf " $(GREEN) SUCCESS\n"

%.o: %.c $(INCLUDS)
	@$(CC) -c $< -o $@

clean:
	@ $(RM) $(OBJ)
	
fclean: clean
	@ $(RM) $(NAME)
re: fclean all
