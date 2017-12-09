all: main test

%: %.cpp
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@

