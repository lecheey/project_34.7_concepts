CC = g++
COMPILER_FLAG = -std=c++20 -fconcepts-diagnostics-depth=3
SRC = main.cpp
TARGET = test_concepts

test_concepts:	${SRC}
		${CC} -o ${TARGET} ${SRC} test_class.h ${COMPILER_FLAG}
