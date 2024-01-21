# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 06:19:43 by aelbouaa          #+#    #+#              #
#    Updated: 2024/01/21 07:50:51 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98  #-fsanitize=address

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCar.cpp WrongAnimal.cpp Brain.cpp

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