hepsi: derle calistir

derle:
	g++ -I ./include -c ./src/top.cpp -o ./lib/top.o
	g++ -I ./include -c ./src/kova.cpp -o ./lib/kova.o
	g++ -I ./include -c ./src/kovakontrol.cpp -o ./lib/kovakontrol.o
	g++ -I ./include -c ./src/test.cpp -o ./lib/test.o
	g++ -o ./bin/test ./lib/test.o ./lib/kovakontrol.o ./lib/kova.o ./lib/top.o
calistir:
	./bin/test