NAME =ex03
GCC = g++
CFLAGS =-Wall -Wextra -Werror -Wshadow -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)
		$(GCC) $(CFLAGS) -o $@ $^

.cpp.o:
	$(GCC) $(CFLAGS) -c -o $@ $<

clean : 
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re : clean fclean all

.PHONEY : all re clean fclean
