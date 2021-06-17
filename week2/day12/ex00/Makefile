# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 11:20:22 by tpolonen          #+#    #+#              #
#    Updated: 2021/06/09 13:54:32 by tpolonen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER_DIR)
TARGET = ft_display_file
HEADER_DIR = ./includes/
SRC_DIR = ./srcs/
FILES = ft_display_file
SRC = $(patsubst %, $(SRC_DIR)%.c, $(FILES))
OBJ = $(patsubst %, %.o, $(FILES))

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(TARGET)

re: fclean all