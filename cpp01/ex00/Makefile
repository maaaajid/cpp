# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 19:14:07 by aelbouaa          #+#    #+#              #
#    Updated: 2024/01/11 08:10:00 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp


all : $(NAME)

$(NAME) :
	$(CXX) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean
	rm -f $(NAME)

re : fclean all