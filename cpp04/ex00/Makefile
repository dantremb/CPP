# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 20:03:21 by dantremb          #+#    #+#              #
#    Updated: 2022/12/15 15:56:49 by dantremb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du Projet
NAME = a.out

# Flags
CFLAGS = -Wall -Wextra -Werror
CC = clang++

# Sources files
S = srcs/
SRCS_FILES = main.cpp Animal.class.cpp Dog.class.cpp Cat.class.cpp
SRCS = $(addprefix $S, $(SRCS_FILES))

# Objects conversion
O = objs/
OBJS= $(SRCS:$S%=$O%.o)
$O%.o: $S%
	@printf "$R■$W"
	@$(CC) $(CFLAGS) -c $< -o $@

# Main rule
all: signature init $(NAME)
	@echo "$G\n$(NAME) Compiled!$W"

# Initialise librairies and making objs folder
init:
	@mkdir -p $O
	@printf "$CCreating $(NAME)\n$W"

# Creating executable
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^

# Cleaning
REMOVE = rm -rf

clean:
	@$(REMOVE) $O

fclean: clean
	@$(REMOVE) $(NAME)

re:	fclean all

# Utilities
COMMIT = $(shell date "+%d %B %T")
git:
	@git add .
	@git commit -m "$(COMMIT)"
	@git push

R = $(shell tput -Txterm setaf 1)
G = $(shell tput -Txterm setaf 2)
C = $(shell tput -Txterm setaf 6)
W = $(shell tput -Txterm setaf 7)

signature:
	@clear
	@echo "\n$G+---+---+---+---+---+---+---+---+"
	@echo "$G|$C	$(NAME) by Dantremb	$G|"
	@echo "$G+---+---+---+---+---+---+---+---+"

test:
	@echo "----- TESTING ----- DEBUG -----"
	@./a.out DEBUG
	@echo "----- TESTING ----- INFO -----"
	@./a.out INFO
	@echo "----- TESTING ----- WARNING -----"
	@./a.out WARNING
	@echo "----- TESTING ----- ERROR -----"
	@./a.out ERROR