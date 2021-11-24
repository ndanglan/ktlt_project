test: Encoder.o test.o Parent.o
	g++ Encoder.o test.o Parent.o -o test.exe

test.o: test.cpp Encoder.h
	g++ -c test.cpp

Encoder.o: Encoder.cpp Encoder.h Parent.h 
	g++ -c Encoder.cpp 

Parent.o: Parent.cpp Parent.h
	g++ -c Parent.cpp

string_divide.o: string_divide.cpp
	g++ -c string_divide.cpp

clean: 
	del *.o *.exe
