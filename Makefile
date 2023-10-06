# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alalmeid <alalmeid@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 17:51:41 by alalmeid          #+#    #+#              #
#    Updated: 2023/10/06 18:45:46 by alalmeid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC	=	ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memset ft_strlen \

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
