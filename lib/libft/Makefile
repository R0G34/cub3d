# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:19:51 by fsantill          #+#    #+#              #
#    Updated: 2024/03/06 17:55:53 by abausa-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS= -Wall -Werror -Wextra
FT=		ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_strlen.c			\
		ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memmove.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strcmp.c 		\
		ft_memchr.c			\
		ft_memfree_all.c	\
		ft_memfree.c 		\
		ft_memcmp.c			\
		ft_strnstr.c		\
		ft_atoi.c			\
		ft_array.c 			\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_itoa.c			\
		ft_isspace.c 		\
		ft_strmapi.c		\
		ft_striteri.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_printf.c			\
		ft_printf_utils.c	\
		get_next_line_bonus.c \
		get_next_line_utils_bonus.c

OBJ=$(FT:%.c=%.o)

BONUS=	ft_lstnew_bonus.c		\
		ft_lstadd_front_bonus.c	\
		ft_lstadd_back_bonus.c	\
		ft_lstsize_bonus.c		\
		ft_lstlast_bonus.c		\
		ft_lstdelone_bonus.c	\
		ft_lstclear_bonus.c		\
		ft_lstiter_bonus.c		\
		ft_lstmap_bonus.c

OBJBONUS= $(BONUS:%.c=%.o)
bonuses = .cache

all:$(NAME)

$(NAME):$(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus:$(bonuses)

$(bonuses): $(NAME) $(OBJBONUS)
	ar -rcs $^
	ar -rcs $(bonuses) $^

.PHONY: clean fclean re

clean:
	rm -rf $(OBJ) $(OBJBONUS)
fclean: clean
	rm -rf $(NAME) $(bonuses)
re: fclean $(NAME)

# flag -g3 allow debugger (not included)