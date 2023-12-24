# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 05:09:09 by aelbouaa          #+#    #+#              #
#    Updated: 2023/12/24 06:29:35 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp

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