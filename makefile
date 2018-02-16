####################################
# Program name: makefile
# Author: Merry Caroline Purser
# Date: 08/08/2017
# Description: Final Project makefile
####################################

CFLAGS = -std=c++0x

final: main.o Space.o Game.o Home.o Lair.o Lake.o Monastery.o Mountains.o River.o Town.o  
	g++ main.o Space.o Game.o Home.o Lair.o Lake.o Monastery.o Mountains.o River.o Town.o -o final
	
main.o: main.cpp
	g++ -c main.cpp
	
Space.o: Space.cpp Space.hpp
	g++ -c Space.cpp
	
Game.o: Game.cpp Game.hpp
	g++ -c Game.cpp
	
Home.o: Home.cpp Home.hpp
	g++ -c Home.cpp	

Lair.o: Lair.cpp Lair.hpp
	g++ -c Lair.cpp
	
Lake.o: Lake.cpp Lake.hpp
	g++ -c Lake.cpp

Monastery.o: Monastery.cpp Monastery.hpp
	g++ -c Monastery.cpp
	
Mountains.o: Mountains.cpp Mountains.hpp
	g++ -c Mountains.cpp
	
River.o: River.cpp River.hpp
	g++ -c River.cpp
	
Town.o: Town.cpp Town.hpp
	g++ -c Town.cpp	
	
clean:
	rm *.o final