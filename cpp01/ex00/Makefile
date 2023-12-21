# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 19:14:07 by aelbouaa          #+#    #+#              #
#    Updated: 2023/12/20 19:16:10 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
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