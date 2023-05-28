# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajafy <ajafy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 22:01:50 by ajafy             #+#    #+#              #
#    Updated: 2023/05/28 01:36:01 by ajafy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = identify

HEADER = Base.hpp A.hpp B.hpp C.hpp

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