# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 15:11:51 by dantremb          #+#    #+#              #
#    Updated: 2023/03/01 15:11:52 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	RPN
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -g
SRCS	=	main.cpp RPN.cpp
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