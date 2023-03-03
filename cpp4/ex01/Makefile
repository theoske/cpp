# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 14:56:05 by tkempf-e          #+#    #+#              #
#    Updated: 2023/03/03 14:36:20 by tkempf-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := polymorphism

SRCS     := main.cpp	Cat.cpp		Dog.cpp		Animal.cpp	WrongAnimal.cpp	\
			WrongCat.cpp	Brain.cpp
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