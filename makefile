all: work11.o
	gcc work11.o
work11.o: work11.c
	gcc -c work11.c
run: all
	./a.out
clean:
	rm *.o
	rm *~
