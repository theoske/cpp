# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 17:05:22 by tkempf-e          #+#    #+#              #
#    Updated: 2023/02/14 17:51:10 by tkempf-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := claptrap

SRCS     := main.cpp	ClapTrap.cpp
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