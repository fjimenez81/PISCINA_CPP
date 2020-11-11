# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/22 16:50:52 by fjimenez          #+#    #+#              #
#    Updated: 2020/11/09 11:28:20 by fjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CLANG = clang++ -Wall -Wextra -Werror

RM = rm -rf

SRC = main.cpp Contact.cpp search_cont.cpp

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
