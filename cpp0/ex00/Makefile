NAME := megaphone

SRCS =  megaphone.cpp \

OBJS = ${SRCS:.cpp=.o}

GCC := clang++ -Wall -Wextra -Werror -std=c++98 -g
MV := mv -f
RM := rm -f

%.o: %.cpp
	$(GCC) -c $< -o $@ 

$(NAME): $(OBJS)
	$(GCC) -o $(NAME)  $^ -I .

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS)

re: clean all

.PHONY: all clean fclean re