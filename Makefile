# Copyright 2016 Martin Fracker, Jr.
# All Rights Reserved.
#
# This project is free software, released under the terms
# of the GNU General Public License v3. Please see the
# file LICENSE in the root directory or visit
# www.gnu.org/licenses/gpl-3.0.en.html for license terms.

SRCS := main.cc hexagon.cc
OBJECTS := $(SRCS:.cc=.o)
EXECUTABLE ?= main

CXXFLAGS ?= -std=c++11 -c -Wall --pedantic
LDFLAGS ?= -lglut -lGL -lGLU
CXX ?= g++
RM ?= rm -rf

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ -o $@

.cc.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	$(RM) *.o $(EXECUTABLE) 
