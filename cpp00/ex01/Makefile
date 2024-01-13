# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 11:48:22 by aelbouaa          #+#    #+#              #
#    Updated: 2024/01/12 12:06:53 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = Contact.cpp PhoneBook.cpp

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