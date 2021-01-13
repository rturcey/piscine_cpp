
SRCS		= AWeapon.cpp  Character.cpp  Enemy.cpp  main.cpp  PlasmaRifle.cpp  PowerFist.cpp  RadScorpion.cpp  SuperMutant.cpp Warrior.cpp BasicGun.cpp

INC_DIR		= ./
INCLUDES	= AWeapon.hpp  Character.hpp  Enemy.hpp  PlasmaRifle.hpp  PowerFist.hpp  RadScorpion.hpp  SuperMutant.hpp Warrior.hpp BasicGun.hpp

OBJS		= ${SRCS:.cpp=.o}

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

NAME		= fire

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
