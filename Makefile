# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsysaath <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/09 00:51:14 by gsysaath          #+#    #+#              #
#    Updated: 2017/12/20 04:06:06 by gsysaath         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GG = gcc

CFLAG = -Wall -Wextra -Werror -O1 -g -fsanitize=address -fno-omit-frame-pointer -fsanitize-address-use-after-scope

NAME = a.out

SRC = main.c \
	  get_next_line.c \
	  libft/ft_strchr.c \
	  libft/ft_strjoin.c \
	  libft/ft_strdup.c \
	  libft/ft_strlen.c \
	  libft/ft_strcpy.c \
	  libft/ft_strcat.c \


HEAD = libft.h \
	   get_next_line.h \


RM = rm -f

OBJ = get_next_line.o \
	  main.o \
	  ft_strlen.o \
	  ft_strchr.o \
	  ft_strjoin.o \
	  ft_strdup.o \
	  ft_strcpy.o \
	  ft_strcat.o \
	  ##$(SRC:.c=.o)

%.o: %.c
	@echo "\033[1;32;m[$<]\033[0m : " | tr -d '\n'
	$(GG) $(CFLAG) -c $(SRC) -I $(HEAD)

all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	$(GG) $(CFLAG) -o $@ $(OBJ)
	@echo "\033[1;32;m[Compilation Successful]\033[0m"
	@echo "\033[1;36;m$(NAME)\033[1;32;m ready to go !\033[0m"

clean:
	@echo "\033[0;33;m[Clean]\033[0m              : " | tr -d '\n'
	rm -f $(OBJ)

fclean: clean
	@echo "\033[0;31;m[Deleting $(NAME)]\033[0m : " | tr -d '\n'
	rm -f $(NAME)

re: fclean all
