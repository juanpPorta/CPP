NAME := ex03

SRCS =  Bureaucrat.cpp main.cpp Form.cpp \
		ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \

OBJS = ${SRCS:.cpp=.o}

GCC := clang++  -Wshadow -Wno-shadow -Wall -Wextra -Werror -std=c++98 -g
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
	@$(RM) *_shrubbery

re: clean all

.PHONY: all clean fclean re