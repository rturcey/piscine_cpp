
SRCS		= Contact_class.cpp phonebook.cpp

INC_DIR		= ./
INCLUDES	= Contact_class.hpp

OBJS		= ${SRCS:.cpp=.o}

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME		= phonebook

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
