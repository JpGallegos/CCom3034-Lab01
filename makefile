frac:
	g++ -o frac frac.cpp fracClient.cpp

fracArray:
	g++ -o frac frac.cpp fracArray.cpp fracArrayClient.cpp

clean:
	rm frac
