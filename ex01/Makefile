src = main.cpp Span.cpp

cc = c++ -Wall -Wextra -Werror -std=c++98

Span = Span

all: Span

$(Span): $(src)
	@$(cc) $(src) -o Span
	@tput setaf 2; echo "Span IS READY"

clean:
	@rm -rf *.o
	@tput setaf 2; echo "CLEAN COMPLETE"

fclean: clean
	@rm -rf Span
	@tput setaf 2; echo "FCLEAN CLEAN"

re: clean fclean all

.PHONY: all clean fclean re