# # frac:
# 	g++ -o frac frac.cpp fracClient.cpp

# fracArray:
# 	g++ -o frac frac.cpp fracArray.cpp fracArrayClient.cpp

# clean:
# 	rm frac

# Anatomy of a Makefile
# target: dependencies ...
# [\t]command to build the target
frac: frac.o fracClient.o
	g++ -o frac frac.o fracClient.o

frac.o: frac.h frac.cpp
	g++ -c frac.cpp

fracClient.o: fracClient.cpp frac.h
	g++ -c fracClient.cpp