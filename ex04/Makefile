# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/04 00:41:18 by yuknakas          #+#    #+#              #
#    Updated: 2026/01/04 00:44:51 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	replace
CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRCS	=	srcs/main.cpp srcs/replace.cpp
OBJS	=	$(SRCS:.cpp=.o)

RMFLAG	=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) -c $< -o $@

clean:
	$(RMFLAG) $(OBJS)

fclean: clean
	$(RMFLAG) $(NAME)

re: fclean all

.PHONY: all clean fclean re
