NAME=Phonebook
INCLUDE=src/Contact.hpp src/PhoneBook.hpp
OBJS=src/main.o src/Contact.o src/PhoneBook.o
CXX= c++
CFLAGS=-Wall -Wextra -Werror -std=c++98 
GREEN = \033[32m
YELLOW = \033[33m
RESET = \033[0m
RED = \033[31m

all: $(NAME) 
	@echo Execute o Programa: ./Phonebook

$(NAME): $(OBJS)
	@$(CXX) $(CFLAGS) $(OBJS) -o Phonebook 
	@echo -e "$(GREEN)[✓] Compilado: $(NAME)$(RESET)"

$(OBJS): $(INCLUDE)

clean:
	rm -f $(OBJS)
	rm -rf objs
	@echo -e "$(RED)Objectos eliminados$(RESET)"

fclean: clean
	@rm -rf $(NAME)

re: fclean clean all

