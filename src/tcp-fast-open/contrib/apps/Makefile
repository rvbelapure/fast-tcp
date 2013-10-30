CXX = gcc
CXXFLAGS = -Wall -g

INCLUDEDIR = ../../lwip/src/include/ 
LWIPOPTDIR = ../../
IPV4INCLUDEDIR = ../../lwip/src/include/ipv4
UNIXINCLUDEDIR = ../ports/unix/include
LWIPLIBDIR = /home/gangil/dev/fast-tcp/src/ttcp/contrib/ports/unix/proj/lib

all: examples

examples: httpserver-netconn.o main.o
	$(CXX) $(CXXFLAGS) -L$(LWIPLIBDIR) -o httpserver-netconn main.o httpserver-netconn.o -pthread -llwip -Wl,-rpath=$(LWIPLIBDIR)


httpserver-netconn.o: httpserver/httpserver-netconn.c  
	$(CXX) $(CXXFLAGS) -c -I$(INCLUDEDIR) -I$(LWIPOPTDIR) -I$(UNIXINCLUDEDIR) -I$(IPV4INCLUDEDIR) -L$(LWIPLIBDIR) httpserver/httpserver-netconn.c

main.o: httpserver/main.c
	$(CXX) -c httpserver/main.c

clean:
	rm *.o
