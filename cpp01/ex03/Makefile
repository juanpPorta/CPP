NAME := Violencia

SRCS =  main.cpp Weapon.cpp \
		HumanA.cpp HumanB.cpp \

OBJS = ${SRCS:.cpp=.o}

GCC := c++ -Wall -Wextra -Werror -std=c++98 -g
MV := mv -f
RM := rm -f

%.o: %.cpp
	@$(GCC) -c $< -o $@ 

$(NAME): $(OBJS)
	 @$(GCC) -I .  -o $(NAME)  $^

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(OBJS)

re: clean all

.PHONY: all clean fclean re