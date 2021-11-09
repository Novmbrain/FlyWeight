exe : main.o Forest.o TreeFactory.o TreeType.o Tree.o
	g++ -o exe main.o Forest.o TreeFactory.o TreeType.o Tree.o
main.o : main.cpp Forest.h TreeFactory.h TreeType.h Tree.h
	g++ -c main.cpp
Forest.o : Forest.cpp Forest.h TreeFactory.h TreeType.h Tree.h
	g++ -c Forest.cpp
TreeFactory.o : TreeFactory.cpp TreeFactory.h TreeType.h
	g++ -c TreeFactory.cpp
TreeType.o : TreeType.cpp TreeType.h
	g++ -c TreeType.cpp
Tree.o : Tree.cpp Tree.h
	g++ -c Tree.cpp