GXX = g++

build:
	$(GXX) -fPIC -c main.cpp pow.cpp
	$(GXX) -shared -fPIC -o libpow.so main.o pow.o
	g++ -o a.out main.cpp -L./ -lpow

debug:
	$(GXX) -g -fPIC -c main.cpp pow.cpp               
	$(GXX) -g -shared -fPIC -o libpow.so main.o pow.o 
	$(GXX) -g -o adebug.out main.cpp -L./ -lpow               
                                               

clean:
	rm ./*.o
clear:
	rm ./*.o ./*.out ./*.so
