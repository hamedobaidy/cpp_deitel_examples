CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		main.o Invoice.o

LIBS =

TARGET =	invoice_test

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
