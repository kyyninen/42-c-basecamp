# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 08:01:19 by tpolonen          #+#    #+#              #
#    Updated: 2021/06/08 18:51:54 by tpolonen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER_DIR)
TARGET = do_op
HEADER_DIR = ./includes/
SRC_DIR = ./srcs/
SRC = $(SRC_DIR)do_op.c $(SRC_DIR)ft_atoi.c $(SRC_DIR)ops.c $(SRC_DIR)print.c
OBJ = do_op.o ft_atoi.o ops.o print.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ) $(TARGET)