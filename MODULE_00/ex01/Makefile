# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/22 16:50:52 by fjimenez          #+#    #+#              #
#    Updated: 2020/08/18 16:40:44 by fjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CLANG = clang++ -Wall -Wextra -Werror

RM = rm -rf

SRC = phonebook.cpp search_cont.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CLANG) $(SRC) -c
	$(CLANG) $(OBJ) -o $(NAME)
	@echo "====DONE===="

clean:
	@echo Cleaning objects
	@$(RM) $(OBJS)

fclean: clean
	@echo Cleaning phonebook
	@$(RM) $(NAME)

re: fclean all

test:	$(NAME)
	./$(NAME) 

.PHONY: all clean fclean re test
