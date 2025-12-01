# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/30 18:15:26 by yuknakas          #+#    #+#              #
#    Updated: 2025/11/30 18:43:57 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombies
CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRCS	=	srcs/Zombie.cpp srcs/main.cpp srcs/zombieHorde.cpp
OBJS	=	$(SRCS:.cpp=.o)

RMFLAG	=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CPP) -c $< -o $@

clean:
	$(RMFLAG) $(OBJS)

fclean: clean
	$(RMFLAG) $(NAME)

re: fclean all clean

.PHONY: all clean re fclean