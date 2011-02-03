objects = testcomp.o

testcomp: $(objects)
	g++ -o testcomp $(objects)

testcomp.o: testcomp.cpp testcomp.h
	g++ -c testcomp.cpp

clean: 
	rm *.o testcomp