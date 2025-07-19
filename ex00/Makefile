NAME=megaphone
FILES= src/megaphone.cpp
OBJS=$(FILES:src/%.cpp=objs/%.o)
TESTE=file.c
CC= g++
CFLAGS=-Wall -Wextra -Werror

GREEN = \033[32m
YELLOW = \033[33m
RESET = \033[0m
RED = \033[31m

all: $(NAME)
	@echo Execute o Programa: ./megaphone

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -std=c++98 -o megaphone 
	@echo -e "$(GREEN)[✓] Compilado: $(NAME)$(RESET)"

objs/%.o: src/%.cpp
	@mkdir -p objs 
	@echo -e "$(YELLOW)[-]Compilando $<...$(RESET)"
	@$(CC) $(CFLAGS) -std=c++98 -c $< -o $@ 


clean:
	rm -f $(OBJS)
	rm -rf objs
	@echo -e "$(RED)Objectos eliminados"

fclean: clean
	@rm -f $(NAME)

re: fclean clean all

