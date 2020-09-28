# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 18:03:18 by fjimenez          #+#    #+#              #
#    Updated: 2020/09/28 18:03:37 by fjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRC = whatever.cpp

OBJS = ${SRC:.cpp=.o}

CC	= clang++
CFLAGS 	= -Wall -Wextra -Werror
RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@${CC} ${CFLAGS} -o $@ -c $<

clean:
	@${RM} ${OBJS}

fclean:	clean
	@${RM} ${NAME}

re:	fclean all

.PHONY: all fclean clean re