# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/02 20:44:22 by yuknakas          #+#    #+#              #
#    Updated: 2026/01/02 20:48:38 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Violence
CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRCS	=	srcs/HumanA.cpp srcs/HumanB.cpp srcs/Weapon.cpp srcs/main.cpp
OBJS	=	$(SRCS:.cpp=.o)

RMFLAG	=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(SRCS) -o $(NAME)

%.o: %.cpp
	$(CPP) -c $< -o $@

clean:
	$(RMFLAG) $(OBJS)

fclean: clean
	$(RMFLAG) $(NAME)

re: fclean all

.PHONY: all clean fclean re
