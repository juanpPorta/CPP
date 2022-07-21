NAME := ex03

SRCS =  AMateria.cpp Character.cpp\
		MateriaSource.cpp main.cpp Cure.cpp Ice.cpp\

OBJS = ${SRCS:.cpp=.o}

GCC := c++  -Wshadow -Wno-shadow -Wall -Wextra -Werror  -std=c++98 -g
MV := mv -f
RM := rm -f

%.o: %.cpp
	@echo "------------------------------------------------------------------------------------------------"
	$(GCC) -c $< -o $@ 
$(NAME): $(OBJS)
	@echo "------------------------------------------------------------------------------------------------------------------------------------------------"
	$(GCC) -I .  -o $(NAME)  $^
	@echo "------------------------------------------------------------------------------------------------------------------------------------------------"
all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(OBJS)

re: clean all

.PHONY: all clean fclean re