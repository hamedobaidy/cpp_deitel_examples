CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		main.o Account.o

LIBS =

TARGET =	account_balance

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
