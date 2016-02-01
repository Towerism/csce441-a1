CXXFLAGS ?= -std=c++11 -c
LDFLAGS ?= -lglut -lGL -lGLU
CXX ?= g++
RM ?= rm -rf
EXECUTABLE ?= main
SRCS := main.cc hexagon.cc
OBJECTS := $(SRCS:.cc=.o)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ -o $@

.cc.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	$(RM) *.o $(EXECUTABLE) 
