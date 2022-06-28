# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan <juan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 15:38:46 by jporta            #+#    #+#              #
#    Updated: 2022/06/23 18:08:14 by juan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombies

SRCS =  newZombie.cpp main.cpp Zombie.cpp \
		randomChump.cpp

OBJS = ${SRCS:.cpp=.o}

GCC := c++exi -Wall -Wextra -Werror -std=c++98 -g
MV := mv -f
RM := rm -f

%.o: %.cpp
	$(GCC) -c $< -o $@ 

$(NAME): $(OBJS)
	$(GCC)  -o $(NAME)  $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS)

re: clean all

.PHONY: all clean fclean re