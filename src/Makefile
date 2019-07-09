CXX = g++
CXXFLAGS = -Wall -Werror -std=c++14
CHEAT_OBJS = sheet.o cheat.o
CHEAT_BINARY = cheat

cheat: $(CHEAT_OBJS)
		$(CXX) $(CXXFLAGS) $(CHEAT_OBJS) -o $(CHEAT_BINARY) $(LDFLAGS)
			
clean:
		rm -f $(CHEAT_BINARY) *.o *~

.PHONY: all clean test

