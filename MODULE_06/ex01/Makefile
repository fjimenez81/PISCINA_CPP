# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fjimenez <fjimenez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 16:52:42 by fjimenez          #+#    #+#              #
#    Updated: 2020/11/17 12:10:53 by fjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize

SRC = Serialize.cpp main.cpp

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