NAME	=	liblst.a
SRC	=	ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c\
		ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
		ft_lstclear.c	ft_lstiter.c		ft_lstmap.c
OBJ	=	${SRC:%.c=%.o}
HEADER	=	liblst.h
CFLAGS	=	-Wall -Wextra -Werror -I${HEADER}

.PHONY	:	all clean fclean re

all	:	${NAME}
${NAME}	:	${OBJ} ${HEADER}
		ar rcs ${NAME} $?
%.o : %.c	${HEADER}
		${CC} ${CGLAGS} -c $< -o $@
clean	:	
		rm -f ${OBJ}
fclean	:	clean
		rm -f ${NAME}
re	:	fclean all
