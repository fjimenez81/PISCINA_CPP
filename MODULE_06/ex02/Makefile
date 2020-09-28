# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjimenez <fjimenez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 17:38:45 by fjimenez          #+#    #+#              #
#    Updated: 2020/09/28 17:43:26 by fjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = type

SRC = Type.cpp

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