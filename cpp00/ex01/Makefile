# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 11:48:22 by aelbouaa          #+#    #+#              #
#    Updated: 2024/01/12 04:38:34 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = PhoneBook

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = PhoneBook.cpp Contact.cpp

all : $(NAME)

$(NAME) :
	$(CXX) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all