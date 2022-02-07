target: Animal.o Cat.o Dog.o test.o
	gcc *.o -g -o test
test.o: stdooc.h Animal.h Cat.h Dog.h test.c
	gcc -c -g test.c
Cat.o: stdooc.h Animal.h Cat.c
	gcc -c -g Cat.c
Dog.o: stdooc.h Animal.h Dog.c
	gcc -c -g Dog.c
Animal.o: stdooc.h Animal.h Animal.c
	gcc -c -g Animal.c
	
clean:
	rm *.o test test.exe
