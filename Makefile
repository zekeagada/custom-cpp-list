# Compiler and flags
CXX = c++
CXXFLAGS = -std=c++17 -Wall

# Target executable name
TARGET = listMain

# Object files
OBJS = list2.o listMain.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

list2.o: list2.cpp list.h
	$(CXX) $(CXXFLAGS) -c list2.cpp

listMain.o: listMain.cpp list.h
	$(CXX) $(CXXFLAGS) -c listMain.cpp

clean:
	rm -f *.o $(TARGET)
