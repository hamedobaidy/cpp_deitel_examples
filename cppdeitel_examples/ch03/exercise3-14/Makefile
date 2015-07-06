CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		main.o Employee.o

LIBS =

TARGET =	employee_test

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
