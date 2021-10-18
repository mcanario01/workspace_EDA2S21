all:
	mkdir bin
	g++ -c ./TDA-Lista-v2/lista.cpp -o ./bin/lista.o
	g++ -c ./TDA-Pila/pila.cpp -o ./bin/pila.o
	g++ -c ./TDA-Cola/cola.cpp -o ./bin/cola.o
	g++ -c taller6.cpp -o ./bin/taller6.o
	g++ -c main.cpp -o ./bin/main.o
	g++ ./bin/*.o -o ejecutable
	rm -rf bin
	./ejecutable