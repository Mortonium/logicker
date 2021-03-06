SOURCES=main.cpp \
		truth_table_mode.cpp \
		tokenizer_t.cpp \

INCLUDE_DIRECTORIES=src \

LIB_DIRECTORIES=

LIBS=

CXX=g++
STD=c++11
BIN_DIR=bin
TARGET_NAME=logicker



SOURCES_FULL=$(addprefix src/,$(SOURCES))
INCLUDE_DIRECTORIES_FULL=$(addprefix -I,$(INCLUDE_DIRECTORIES))
LIB_DIRECTORIES_FULL=$(addprefix -L,$(LIB_DIRECTORIES))
LIBS_FULL=$(addprefix -l,$(LIBS))

all:
	-rm -r $(BIN_DIR)
	mkdir $(BIN_DIR)
	$(CXX) -std=$(STD) -o $(BIN_DIR)/$(TARGET_NAME) $(INCLUDE_DIRECTORIES_FULL) $(LIB_DIRECTORIES_FULL) $(SOURCES_FULL) $(LIBS_FULL)

