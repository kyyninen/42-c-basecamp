# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 06:54:36 by tpolonen          #+#    #+#              #
#    Updated: 2021/06/08 17:33:27 by tpolonen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -Iincludes/
ARFLAGS = rc
TARGET = libft.a
SRC_DIR = ./srcs/
SRCS = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_putstr.c \
$(SRC_DIR)ft_strcmp.c $(SRC_DIR)ft_strlen.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(SRCS)
	$(AR) $(ARFLAGS) $(TARGET) $(OBJ)
	ranlib $(TARGET)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all