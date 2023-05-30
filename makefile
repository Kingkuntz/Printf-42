# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kumalong <kumalong@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 18:59:10 by kumalong          #+#    #+#              #
#    Updated: 2023/05/30 19:18:57 by kumalong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprint.a

SRCS = ft_hexa.c ft_point.c ft_printf.c ft_utils.c \

INCLUDE = ft_printf.h 

CC = gcc 
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

%.o%.c $(INCLUDE)
@ECHO COMPILING...
@$(CC) $(FLAGS) -c $< -o $@

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo $(NAME) created

clean:
	@$(RM) $(OBJS)
	@echo all objets clean succesfully 

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	@echo object and executable has been removed

re: fclean all

.PHONY = all clean re fclean
