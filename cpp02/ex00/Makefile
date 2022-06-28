NAME := Karen

SRCS =  main.cpp Fixed.cpp

OBJS = ${SRCS:.cpp=.o}

GCC := c++ -std=c++98 -g
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
	@$(RM) *.replace
	

re: clean all

.PHONY: all clean fclean re