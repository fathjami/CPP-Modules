CC		= c++ -Wall -Wextra -Werror
RM		= rm -rf
FILES	= main Harl
INCLUDS = Harl.hpp
SRC		= $(FILES:=.cpp)
OBJ		= $(FILES:=.o)
NAME	= harlFilter
GREEN 	= \x1b[42m
END		= \e[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDS)
	@$(CC) $(OBJ) -o $(NAME)
	@printf " $(GREEN) SUCCESS $(END)\n"

%.o: %.c $(INCLUDS)
	@$(CC) -c $< -o $@

clean:
	@ $(RM) $(OBJ)

fclean: clean
	@ $(RM) $(NAME)
re: fclean all