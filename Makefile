CXX=g++
INCFLAGS=-I ./include
LDFLAGS=$(LIBFLAGS) -lm -lpthread
CXXFLAGS=-std=c++11 $(DEF)
SRCS=$(shell ls *.cpp ./src/*.cpp)
OBJS=$(patsubst %.cpp,%.o,$(SRCS)) 

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(INCFLAGS) $(LIBFLAGS)

clean:
	rm -rf *.o main ./src/*.o 
