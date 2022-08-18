CC		= c++ -Wall -Wextra  -Werror -std=c++98 -g
RM		= rm -rf
FILES	=	main Span
INCLUDS =	Span.hpp
SRC		= $(FILES:=.cpp)
OBJ		= $(FILES:=.o)
NAME	= exec
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