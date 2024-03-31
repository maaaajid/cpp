NAME = PmergeMe

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp PmergeMe.cpp VectSort.cpp DeqSort.cpp

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