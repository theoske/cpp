# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 15:40:47 by tkempf-e          #+#    #+#              #
#    Updated: 2023/02/03 15:41:18 by tkempf-e         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := canonball

SRCS     := main.cpp	Fixed.cpp
OBJS     := $(SRCS:.cpp=.o)

CXX      := g++
CXXFLAGS := -Wall -Werror -Wextra

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