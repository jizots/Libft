# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hotph <hotph@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 16:31:02 by hotph             #+#    #+#              #
#    Updated: 2023/09/13 14:04:13 by hotph            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC 		=	cc
CFLAGS	=	-Wall -Wextra -Werror
CFLAGS	+=	-I./includes

SCRS	=	ft_memchr.c	ft_strcpy.c ft_strtrim.c ft_memcmp.c ft_strdup.c ft_atoi.c\
			ft_memcpy.c ft_striteri.c ft_substr.c ft_bzero.c ft_memmove.c ft_strjoin.c\
			ft_tolower.c ft_calloc.c ft_memset.c ft_strlcat.c ft_toupper.c ft_isalnum.c\
			ft_putchar_fd.c ft_strlcpy.c ft_isalpha.c ft_putendl_fd.c ft_strlen.c\
			ft_putnbr_fd.c ft_strmapi.c ft_isascii.c ft_putstr_fd.c ft_strncmp.c ft_isdigit.c\
			ft_split.c ft_strnstr.c ft_isprint.c ft_strcat.c ft_strrchr.c ft_itoa.c ft_strchr.c\
			ft_strstr.c\

BSCRS	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c\

EXSCRS	=	base_to_newbase.c count_word.c\
			free_map_null_terminated.c free_map.c free_null.c\
			get_first_line.c\
			get_distance.c get_radian.c\
			is_oddnum.c is_space3.c is_string_composedof.c is_valid_matrix.c\
			power_num.c num_digit.c\
			split_multichar.c\

SCRS_DIR	=	./srcs/
OBJS_DIR	= 	./objs/

ifdef WITH_BONUS
	SRCS += ${BSRCS}
endif

ifdef WITH_EX
	SRCS += ${BSRCS}
	SRCS += ${EXSCRS}
endif

OBJS = ${addprefix ${OBJS_DIR}, ${SCRS:%.c=%.o}}

all:	${OBJS_DIR} $(NAME)

${OBJS_DIR}:
	mkdir -p ${OBJS_DIR}

${OBJS_DIR}%.o: ${SCRS_DIR}%.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME):	$(OBJS)
	ar rcs $@ $^

bonus:
	${MAKE} WITH_BONUS=1 all

ex:
	${MAKE} clean
	${MAKE} WITH_EX=1 all

clean:
	rm -f $(OBJS) $(BOBJS) $(EXOBJS)

fclean:	clean
	rm -f $(NAME)
	rmdir ${OBJS_DIR} 2>/dev/null || true

re: fclean all
