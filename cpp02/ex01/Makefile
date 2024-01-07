# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 01:57:12 by aelbouaa          #+#    #+#              #
#    Updated: 2024/01/06 01:57:13 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = Fixed

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp Fixed.cpp

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