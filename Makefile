all:graph.o fileio.o mapper.o nodemanager.o reducer.o
	g++ -o graph graph.o fileio.o mapper.o nodemanager.o reducer.o -I./

graph.o:graph.cpp
	g++ -c graph.cpp -I./
fileio.o:fileio.cpp
	g++ -c fileio.cpp -I./
mapper.o:mapper.cpp
	g++ -c mapper.cpp -I./
nodemanager.o:nodemanager.cpp
	g++ -c nodemanager.cpp -I./

reducer.o:reducer.cpp
	g++ -c reducer.cpp -I./

clean:
	rm *.o graph
