# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 19:04:32 by aelbouaa          #+#    #+#              #
#    Updated: 2024/01/09 06:05:14 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bsp

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp Fixed.cpp Point.cpp Bsp.cpp

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