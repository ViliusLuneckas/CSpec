specs: clean cspec.o
	gcc -D __DEBUG__ cspec.o **/*.c -o cspec_test_suit

cspec.o: cspec.h cspec.c
	gcc -c cspec.c -D __DEBUG__
	
clean:
	rm -f *.o cspec/*.o cspec_test_suit
	



