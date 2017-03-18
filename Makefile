Main:	Main.o GodArcs.o Bustersword.o Scythe.o Shortsword.o Aragamis.o GodEaters.o 
	g++ Main.o GodArcs.o Bustersword.o Scythe.o Shortsword.o Aragamis.o GodEaters.o -o Main

Main.o:	Main.cpp GodArcs.h Bustersword.h Scythe.h Shortsword.h Aragamis.h GodEaters.h
	g++ -c Main.cpp

GodArcs.o:	GodArcs.cpp GodArcs.h
	g++ -c GodArcs.cpp

Bustersword.o:	Bustersword.cpp Bustersword.h GodArcs.h
	g++ -c Bustersword.cpp

Scythe.o:	Scythe.cpp Scythe.h GodArcs.h
	g++ -c Scythe.cpp

Shortsword.o:	Shortsword.cpp Shortsword.h GodArcs.h
	g++ -c Shortsword.cpp

Aragamis.o:	Aragamis.cpp Aragamis.h 
	g++ -c Aragamis.cpp

GodEaters.o:	GodEaters.cpp GodEaters.h 
	g++ -c GodEaters.cpp
clean:	
	rm *.o main