CC=gcc
SOURCES_C=$(wildcard *.c)
BUILD_DIR=./build

.PHONY: all clean always micron

all: micron

micron: $(BUILD_DIR)/micron
$(BUILD_DIR)/micron: always
	$(CC) -g -o $(BUILD_DIR)/micron $(SOURCES_C)
	chmod +x $(BUILD_DIR)/micron

always:
	mkdir -p $(BUILD_DIR)/

clean:
	rm -rf $(BUILD_DIR)/*
