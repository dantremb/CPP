# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 15:11:55 by dantremb          #+#    #+#              #
#    Updated: 2023/03/01 15:11:56 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	btc
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -g
SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)
RM		=	rm -rf

all		:	$(NAME)

%.o: %.cpp
			$(COMPILE.c) $< $(WARNING) -o $@

$(NAME)	:	${OBJS}
			${CC} ${FLAGS} ${OBJS} -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re