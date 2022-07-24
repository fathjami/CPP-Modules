CC		= c++ -Wall -Wextra -Werror 
RM		= rm -rf
FILES	= main ClapTrap FragTrap DiamondTrap ScavTrap
INCLUDS = ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp ScavTrap.hpp
SRC		= $(FILES:=.cpp)
OBJ		= $(FILES:=.o)
NAME	= DiamondTrap
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