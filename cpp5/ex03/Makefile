# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 15:15:26 by tkempf-e          #+#    #+#              #
#    Updated: 2023/04/27 15:23:29 by tkempf-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := bureaucrat

SRCS     := main.cpp	Bureaucrat.cpp	Form.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp	PresidentialPardonForm.cpp \
			Intern.cpp
OBJS     := $(SRCS:.cpp=.o)

CXX      := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re