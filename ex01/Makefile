# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 03:55:20 by antoineherb       #+#    #+#              #
#    Updated: 2023/07/10 03:56:18 by antoineherb      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		serializer

SRCS =		main.cpp Serializer.cpp

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