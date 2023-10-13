# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 17:51:41 by alalmeid          #+#    #+#              #
#    Updated: 2023/10/13 17:45:22 by alalmeid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC	=	ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memset ft_strlen ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr\

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rc

all:$(NAME)

$(NAME): $(SRC:=.o)
		$(AR) $(NAME) $(SRC:=.o)

clean:
	$(RM) $(SRC:=.o)

fclean: clean 
			$(RM) $(NAME)

re: fclean $(NAME)
