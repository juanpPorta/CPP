# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jporta <jporta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 16:58:37 by jporta            #+#    #+#              #
#    Updated: 2022/06/15 17:05:44 by jporta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombies

SRCS =  main.cpp Zombie.cpp \
		ZombieHorde.cpp

OBJS = ${SRCS:.cpp=.o}

GCC := clang++ -Wall -Wextra -Werror -std=c++98 -g
MV := mv -f
RM := rm -f

%.o: %.cpp
	$(GCC) -c $< -o $@ 

$(NAME): $(OBJS)
	 @$(GCC) -I .  -o $(NAME)  $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(OBJS)

re: clean all

.PHONY: all clean fclean re