hepsi:derle calistir

derle:
	
	g++ -I ./Include/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I ./Include/ -o ./lib/DoublyLinkedList.o -c ./src/DoublyLinkedList.cpp
	g++ -I ./Include/ -o ./lib/Parse.o -c ./src/Parse.cpp
	g++ -I ./Include/ -o ./lib/File.o -c ./src/File.cpp
	g++ -I ./Include/ -o ./lib/Main.o -c ./src/Main.cpp
	g++ -I ./Include/ -o ./bin/Main ./lib/Node.o ./lib/DoublyLinkedList.o ./lib/Parse.o ./lib/File.o ./src/Main.cpp

calistir:
	./bin/Main