# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 04:03:51 by aelbouaa          #+#    #+#              #
#    Updated: 2023/12/21 06:31:03 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombiehorde

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = Zombie.cpp main.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all