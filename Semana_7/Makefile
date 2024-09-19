.PHONY = all clean
CC=g++
CFLAGS=-std=c++23 -Ofast -Wall -Wextra -Wconversion -Wdouble-promotion -Wduplicated-cond -Wfatal-errors -Wfloat-equal -Wformat=2 -Wlogical-op -Wpedantic -Wshadow -Wundef -Wno-unused-parameter -Wno-unused-result
BINS=bin/prog
FILE=ejercicio4.cpp

all: clean $(BINS)

bin/%: $(FILE)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	@echo " [CLN] Removing binary files"
	@rm -f $(BINS)
