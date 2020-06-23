# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/23 19:30:34 by fjimenez          #+#    #+#              #
#    Updated: 2020/06/23 19:36:38 by fjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

CLANG = clang++ -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CLANG) $(SRCS) -c
	$(CLANG) $(OBJS) -o $(NAME)
	@echo Done!

clean:
	@echo Cleaning objects
	@rm -f $(OBJS)

fclean: clean
	@echo Cleaning $(NAME)
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re