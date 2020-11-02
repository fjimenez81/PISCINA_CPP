# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/22 16:50:52 by fjimenez          #+#    #+#              #
#    Updated: 2020/11/02 09:40:49 by fjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CLANG = clang++ -Wall -Wextra -Werror

RM = rm -rf

SRC = megaphone.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CLANG) $(SRC) -o $(NAME)
	@echo "====DONE===="

clean:
	@echo Cleaning objects
	@$(RM) $(OBJS)

fclean: clean
	@echo Cleaning megaphone
	@$(RM) $(NAME)

re: fclean all

test:	$(NAME)
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME)

.PHONY: all clean fclean re test
