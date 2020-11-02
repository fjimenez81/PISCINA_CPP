# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/22 16:50:52 by fjimenez          #+#    #+#              #
#    Updated: 2020/11/02 09:48:01 by fjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CLANG = clang++ -Wall -Wextra -Werror

RM = rm -rf

SRC = phonebook.cpp search_cont.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CLANG) $(SRC) -o $(NAME)
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
