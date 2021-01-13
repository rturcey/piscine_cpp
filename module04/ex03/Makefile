
SRCS		= AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp main.cpp
INC_DIR		= ./
INCLUDES	= AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp

OBJS		= ${SRCS:.cpp=.o}

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME		= bocal

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
