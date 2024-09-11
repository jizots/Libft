#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hotph <hotph@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 16:31:02 by hotph             #+#    #+#              #
#    Updated: 2024/09/11 22:33:03 by hotph            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY: all bonus ex clean fclean re

NAME	=	libft.a
CC 		=	cc
CFLAGS	=	-Wall -Wextra -Werror
CFLAGS	+=	-I./includes

SRCS	=	ft_memchr.c	ft_strcpy.c ft_strtrim.c ft_memcmp.c ft_strdup.c ft_atoi.c\
			ft_memcpy.c ft_striteri.c ft_substr.c ft_bzero.c ft_memmove.c ft_strjoin.c\
			ft_tolower.c ft_calloc.c ft_memset.c ft_strlcat.c ft_toupper.c ft_isalnum.c\
			ft_putchar_fd.c ft_strlcpy.c ft_isalpha.c ft_putendl_fd.c ft_strlen.c\
			ft_putnbr_fd.c ft_strmapi.c ft_isascii.c ft_putstr_fd.c ft_strncmp.c ft_isdigit.c\
			ft_split.c ft_strnstr.c ft_isprint.c ft_strcat.c ft_strrchr.c ft_itoa.c ft_strchr.c\
			ft_strstr.c\

BSRCS	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c\

EXSRCS	=	add_string_to_array.c\
			almost_equal.c\
			base_to_newbase.c\
			count_row_of_matrix.c\
			count_word.c\
			create_trgb_color.c\
			ends_with_str.c\
			free_map_null_terminated.c free_map.c free_null.c\
			ft_gnl.c\
			get_first_line.c\
			get_distance.c get_radian.c\
			is_big_double.c\
			is_oddnum.c is_space3.c\
			is_string_composedof.c\
			is_valid_matrix.c is_valid_string.c\
			is_which_direction.c\
			power_num.c num_digit.c\
			putstr_reverse_fd.c\
			split_multichar.c\

SRCS_DIR	=	./srcs/
OBJS_DIR	= 	./objs/

ifdef WITH_BONUS
	SRCS += ${BSRCS}
endif

ifdef WITH_EX
	SRCS += ${BSRCS} ${EXSRCS}
endif

OBJS = ${addprefix ${OBJS_DIR}, ${SRCS:%.c=%.o}}

all:	${OBJS_DIR} $(NAME)

${OBJS_DIR}:
	@mkdir -p ${OBJS_DIR}

${OBJS_DIR}%.o: ${SRCS_DIR}%.c
	@${CC} ${CFLAGS} -c $< -o $@

$(NAME):	$(OBJS)
	@ar rcs $@ $^
	@echo "libft.a created"

bonus:
	@${MAKE} WITH_BONUS=1 all
	@echo "Bonus added"

ex:
	@${MAKE} WITH_EX=1 all
	@echo "Extra added"

clean:
	@find $(OBJS_DIR) -name "*.o" -type f -exec rm {} + || true
	@echo "Objects deleted"

fclean:	clean
	@rm -f $(NAME) & echo "libft.a deleted"
	@rm -f a.out & echo "a.out deleted"
	@rmdir ${OBJS_DIR} 2>/dev/null || true

re: fclean all

exec: ex
	@${CC} ${CFLAGS} -L. -lft main.c -o a.out
	@echo "a.out created"