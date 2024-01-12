# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 11:47:48 by aelbouaa          #+#    #+#              #
#    Updated: 2024/01/11 05:32:04 by aelbouaa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = tests.cpp Account.cpp

all : $(NAME)

$(NAME) :
	$(CXX) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

fclean :
	rm -f $(NAME)

re : fclean all