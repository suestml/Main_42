# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suustame <suustame@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 15:56:12 by suustame          #+#    #+#              #
#    Updated: 2024/11/17 19:33:43 by suustame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
       ft_strchr.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
       ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_atoi.c \
       ft_memset.c ft_memcpy.c ft_bzero.c ft_memchr.c ft_memcmp.c \
       ft_memmove.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	   ft_striteri.c ft_strmapi.c ft_strtrim.c ft_split.c ft_itoa.c \

OBJS = $(SRCS:.c=.o)
NAME = libft.a
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re