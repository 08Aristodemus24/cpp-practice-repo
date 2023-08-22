test_main: test_main.o test_utils.o
	g++ test_main.o test_utils.o -o test_main

test_main.o: test_main.cpp
	g++ -c test_main.cpp -std=c++11

test_utils.o: test_utils.cpp
	g++ -c test_utils.cpp -std=c++11

# removes files <file 1> [<file 2> ... <file n>]
clean:
	rm *.o test_main