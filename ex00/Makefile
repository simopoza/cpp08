src = main.cpp

cc = c++ -Wall -Wextra -Werror -std=c++98

easyfind = easyfind

all: easyfind

$(easyfind): $(src)
	@$(cc) $(src) -o easyfind
	@tput setaf 2; echo "easyfind IS READY"

clean:
	@rm -rf *.o
	@tput setaf 2; echo "CLEAN COMPLETE"

fclean: clean
	@rm -rf easyfind
	@tput setaf 2; echo "FCLEAN CLEAN"

re: clean fclean all

.PHONY: all clean fclean re