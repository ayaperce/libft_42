# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 18:00:37 by xlebecq           #+#    #+#              #
#    Updated: 2023/12/26 21:22:56 by ayaperce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=clang
CFLAGS=-Wall -Wextra -Werror -g2
RM=rm -f
LDFLAGS=-L.
LDLIBS=-lft
SRC= 	ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strchr.c \
		ft_atoi.c \
		ft_strjoin.c \
		ft_strncmp.c \
		ft_substr.c \
		ft_strrchr.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_itoa.c \
		ft_strnstr.c \
		ft_strtrim.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \
		ft_strmapi.c \
		ft_striteri.c \

SRCB =	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
		ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

$(NAME): $(OBJ) $(OBJB)
	ar rc $(NAME) $(OBJ) $(OBJB)
	ranlib $(NAME)

%.o: %.c
	$(CC) -I. -o $@ -c $< $(CFLAGS) 

all: $(NAME)

bonus : $(OBJ) $(OBJB)
	ar rc $(NAME) $(OBJ) $(OBJB)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ) $(OBJB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRCB)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJB)
