# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 05:03:27 by antoineherb       #+#    #+#              #
#    Updated: 2023/07/13 07:23:31 by antoineherb      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		truetype

SRCS =		main.cpp A.cpp B.cpp C.cpp

OBJS =		$(SRCS:.cpp=.o)

CFLAGS =	-Wall -Wextra -Werror -std=c++98

CC =		c++ $(CFLAGS)

RM =		rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@
	@echo "[REPORT] $(NAME) assembled !"

%.o: %.cpp
	@$(CC) -c $< -o $@
	@echo "[REPORT] Object compiled !"

clean:
	@$(RM) $(OBJS)
	@echo "[REPORT] Objects cleaned !"

fclean: clean
	@$(RM) $(NAME)
	@echo "[REPORT] $(NAME) cleaned !"

re: fclean all

.PHONY: all clean fclean re