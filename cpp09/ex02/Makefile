# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 15:11:42 by dantremb          #+#    #+#              #
#    Updated: 2023/03/01 15:25:44 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PmergeMe
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
SRCS	=	main.cpp PmergeMe.cpp
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