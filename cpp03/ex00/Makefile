NAME := ex00

SRCS =  main.cpp Animal.cpp Dog.cpp Cat.cpp \
		WrongAnimal.cpp WrongDog.cpp WrongCat.cpp\

OBJS = ${SRCS:.cpp=.o}

GCC := clang++  -Wshadow -Wno-shadow -Wall -Wextra -Werror -std=c++98 -g
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