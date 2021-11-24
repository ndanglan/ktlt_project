TARGET = test.exe

BIN = bin
SRC = src
LIB = lib


SOURCE = $(wildcard $(SRC)/*.cpp)
OBJECT = $(subst $(SRC)/,$(BIN)/,$(SOURCE:.cpp=.o))

CC = g++
CFLAGS = -Wall -I$(LIB)

$(BIN)/$(TARGET): $(OBJECT)
	$(CC) $(OBJECT) -o $(BIN)/$(TARGET)

$(BIN)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	del $(subst /,\, $(OBJECT)) $(BIN)\$(TARGET)
