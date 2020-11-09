# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/23 19:30:34 by fjimenez          #+#    #+#              #
#    Updated: 2020/11/09 12:08:55 by fjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = main.cpp File.cpp

OBJS = $(SRCS:.cpp=.o)

CLANG = clang++ -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CLANG) $(SRCS) -o $(NAME)
	@echo Done!

clean:
	@echo Cleaning objects
	@rm -f $(OBJS)

fclean: clean
	@echo Cleaning $(NAME)
	@rm -rf $(NAME)
	@rm -rf *.replace

re: fclean all

.PHONY: all clean fclean re