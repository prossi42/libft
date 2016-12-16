# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prossi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 11:34:52 by prossi            #+#    #+#              #
#    Updated: 2016/12/14 10:13:46 by prossi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

REP_SRCS = srcs/

HEAD = includes/

SRC = $(REP_SRCS)ft_strlen.c $(REP_SRCS)ft_strdup.c \
	  $(REP_SRCS)ft_strcpy.c $(REP_SRCS)ft_strncpy.c \
	  $(REP_SRCS)ft_strcat.c $(REP_SRCS)ft_strncat.c \
	  $(REP_SRCS)ft_putchar.c $(REP_SRCS)ft_putchar_fd.c \
	  $(REP_SRCS)ft_putstr.c $(REP_SRCS)ft_putstr_fd.c \
	  $(REP_SRCS)ft_memset.c $(REP_SRCS)ft_bzero.c \
	  $(REP_SRCS)ft_memcpy.c $(REP_SRCS)ft_memccpy.c \
	  $(REP_SRCS)ft_memmove.c $(REP_SRCS)ft_memchr.c \
	  $(REP_SRCS)ft_memcmp.c $(REP_SRCS)ft_strchr.c \
	  $(REP_SRCS)ft_strrchr.c $(REP_SRCS)ft_strstr.c \
	  $(REP_SRCS)ft_strnstr.c $(REP_SRCS)ft_strcmp.c \
	  $(REP_SRCS)ft_strncmp.c $(REP_SRCS)ft_atoi.c \
	  $(REP_SRCS)ft_isalpha.c $(REP_SRCS)ft_isdigit.c \
	  $(REP_SRCS)ft_isalnum.c $(REP_SRCS)ft_isascii.c \
	  $(REP_SRCS)ft_isprint.c $(REP_SRCS)ft_toupper.c \
	  $(REP_SRCS)ft_tolower.c $(REP_SRCS)ft_memalloc.c \
	  $(REP_SRCS)ft_memdel.c $(REP_SRCS)ft_strnew.c \
	  $(REP_SRCS)ft_strdel.c $(REP_SRCS)ft_strclr.c \
	  $(REP_SRCS)ft_striter.c $(REP_SRCS)ft_striteri.c \
	  $(REP_SRCS)ft_strmap.c $(REP_SRCS)ft_strmapi.c \
	  $(REP_SRCS)ft_strequ.c $(REP_SRCS)ft_strnequ.c \
	  $(REP_SRCS)ft_strsub.c $(REP_SRCS)ft_strjoin.c \
	  $(REP_SRCS)ft_putendl.c $(REP_SRCS)ft_strtrim.c \
	  $(REP_SRCS)ft_putendl_fd.c $(REP_SRCS)ft_putnbr.c \
	  $(REP_SRCS)ft_putnbr_fd.c $(REP_SRCS)ft_itoa.c \
	  $(REP_SRCS)ft_lenint.c $(REP_SRCS)ft_strputneg.c \
	  $(REP_SRCS)ft_strsplit.c $(REP_SRCS)ft_countwords.c

OBJ = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
	  ft_strncat.o ft_putchar.o ft_putchar_fd.o ft_putstr.o \
	  ft_putstr_fd.o ft_memset.o ft_bzero.o ft_memcpy.o \
	  ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o \
	  ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o \
	  ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o \
	  ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
	  ft_toupper.o ft_tolower.o ft_memalloc.o ft_memdel.o \
	  ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o \
	  ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o \
	  ft_strnequ.o ft_strsub.o ft_strjoin.o ft_putendl.o \
	  ft_strtrim.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o \
	  ft_itoa.o ft_lenint.o ft_strputneg.o ft_strsplit.o \
	  ft_countwords.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEAD) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
