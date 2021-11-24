test: string_divide.o Parent.o test.o
	g++ string_divide.o Parent.o test.o -o test.exe

test.o: test.cpp Parent.h
	g++ -c test.cpp

Parent.o: Parent.cpp string_divide.h
	g++ -c Parent.cpp
	
string_divide.o: string_divide.cpp
	g++ -c string_divide.cpp

clean: 
	del *.o *.exe
