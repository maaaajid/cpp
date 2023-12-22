# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 20:23:28 by aelbouaa          #+#    #+#              #
#    Updated: 2023/12/22 03:53:12 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp HumanA.cpp Weapon.cpp HumanB.cpp

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