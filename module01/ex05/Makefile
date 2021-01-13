
SRCS		= main.cpp Brain.cpp Human.cpp

INC_DIR		= ./
INCLUDES	= Brain.hpp Human.hpp

OBJS		= ${SRCS:.cpp=.o}

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME		= brain

.cpp.o:		${SRCS} ${INCLUDES}
			${CC} ${CFLAGS} -I ${INC_DIR} -c $^ -o ${<:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS} ${INCLUDES}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean :
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all
