
NAME	= weapon

SRCS	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS	= ${SRCS:.cpp=.o}

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

CC = c++

RM		= rm -f

all:	${NAME}

.c.o:	${CC} ${CFLAGS} -I -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
		$(CC) ${CFLAGS} ${SRCS} -o $(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o
