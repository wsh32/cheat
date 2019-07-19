CXX = g++
CXXFLAGS = -Wall -Werror -std=c++14
CHEAT_OBJS = sheet.o cheat.o colorize.o
CHEAT_BINARY = cheat

SOURCE_DIR = ./src/
BIN_DIR = ./bin/
OBJS_LIST = $(addprefix $(BIN_DIR), $(CHEAT_OBJS))
BINARY = $(addprefix $(BIN_DIR), $(CHEAT_BINARY))


ifeq ($(PREFIX),)
	PREFIX := /usr/local/bin
endif

all: $(OBJS_LIST) $(BINARY)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)%.o: $(SOURCE_DIR)%.cpp
	$(CXX) -c -g $(CXXFLAGS) -x c++ $< -o $@

$(OBJS_LIST): | $(BIN_DIR)

$(BINARY): $(OBJS_LIST)
	$(CXX) $(CXXFLAGS) $(OBJS_LIST) -o $(BINARY) $(LDFLAGS)
			
clean:
	rm -rf $(BIN_DIR)

install: $(BINARY)
	cp $(BINARY) $(PREFIX)/

.PHONY: all clean install 

