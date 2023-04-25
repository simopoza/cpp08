src = main.cpp

cc = c++ -Wall -Wextra -Werror -std=c++98

MutantStack = MutantStack

all: MutantStack

$(MutantStack): $(src)
	@$(cc) $(src) -o MutantStack
	@tput setaf 2; echo "MutantStack IS READY"

clean:
	@rm -rf *.o
	@tput setaf 2; echo "CLEAN COMPLETE"

fclean: clean
	@rm -rf MutantStack
	@tput setaf 2; echo "FCLEAN CLEAN"

re: clean fclean all

.PHONY: all clean fclean re