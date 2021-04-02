CC = g++
CPPFLAGS = -g
OBJECT = main.o
SRCS = main.cpp

TARGET = result

$(TARGET) : $(OBJECT) LinkedList.h Stack.h
		$(CC) -o $@ $(OBJECT)

clean:
		rm $(OBJECT) $(TARGET)

stack.o: LinkedList.h Stack.h main.cpp
