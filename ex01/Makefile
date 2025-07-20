NAME=Phonebook
FILES= src/main.cpp src/Contact.cpp src/Contact.hpp
OBJS=$(FILES:src/%.cpp=objs/%.o)
CXX= c++
CFLAGS=-Wall -Wextra -Werror -std=c++98 
INCLUDE=Contact.hpp
GREEN = \033[32m
YELLOW = \033[33m
RESET = \033[0m
RED = \033[31m

all: $(NAME) $(INCLUDE)
	@echo Execute o Programa: ./Phonebook

$(NAME): $(OBJS)
	@$(CXX) $(CFLAGS) $(OBJS) -o Phonebook 
	@echo -e "$(GREEN)[✓] Compilado: $(NAME)$(RESET)"

objs/%.o: src/%.cpp
	@mkdir -p objs 
	@echo -e "$(YELLOW)[-]Compilando $<...$(RESET)"
	@$(CXX) $(CFLAGS) -std=c++98 -c $< -o $@ 

clean:
	rm -f $(OBJS)
	rm -rf objs
	@echo -e "$(RED)Objectos eliminados$(RESET)"

fclean: clean
	@rm -f $(NAME)

re: fclean clean all

