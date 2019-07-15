CXX = g++
CXXFLAGS = -Wall -Werror -std=c++14
CHEAT_OBJS = sheet.o cheat.o colorize.o
CHEAT_BINARY = cheat


ifeq ($(PREFIX),)
	PREFIX := /usr/local/bin
endif

%.o: %.cpp
	$(CXX) -c -g $(CXXFLAGS) -x c++ $< -o $@

$(CHEAT_BINARY): $(CHEAT_OBJS)
	$(CXX) $(CXXFLAGS) $(CHEAT_OBJS) -o $(CHEAT_BINARY) $(LDFLAGS)
			
clean:
	rm -f $(CHEAT_BINARY) *.o *~

install: $(CHEAT_BINARY)
	cp $(CHEAT_BINARY) $(PREFIX)/

.PHONY: all clean install 

