# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/02 09:56:30 by ajafy             #+#    #+#              #
#    Updated: 2023/06/04 18:04:32 by ajafy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = btc

HEADER = BitcoinExchange.hpp

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