CXX = g++
CXXFLAGS = -std=c++0x -Wall -pedantic-errors -g

SRCS = src/main.cpp src/todo.cpp
OBJS = ${SRCS:.cpp=.o}
HEADERS = include

MAIN = todo

all: ${MAIN}
		@echo todo app has been compiled

${MAIN}: ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${MAIN}

.cpp.o:
		${CXX} ${CXXFLAGS} -c $< -o $@ -I${HEADERS}

clean:
		${RM} ${PROGS} ${OBJS} *.o *~.

clean-all:
		${RM} ${PROGS} ${MAIN} ${OBJS} *.o *~.