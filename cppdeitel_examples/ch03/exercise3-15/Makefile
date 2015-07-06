CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		main.o Date.o

LIBS =

TARGET =	date_test

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
