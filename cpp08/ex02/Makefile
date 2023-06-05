# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/02 11:51:31 by ajafy             #+#    #+#              #
#    Updated: 2023/06/03 16:07:55 by ajafy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = MutantStack

HEADER = MutantStack.hpp

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all