NAME := death_note

SRCS =  program.cpp \

OBJS = ${SRCS:.cpp=.o}

GCC := c++
MV := mv -f
RM := rm -f

%.o: %.cpp
	$(GCC) -c $< -o $@ 

$(NAME): $(OBJS)
	$(GCC) -o $(NAME)  $^ -I $(INC_DIR)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS)

re: clean all

.PHONY: all clean fclean re