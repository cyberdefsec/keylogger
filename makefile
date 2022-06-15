TARGET = keylogger.exe
#CFLAGS = -Wall -g
CC = gcc
OBJECTS = keylogger.o keyscan.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)
	
keylogger.o: keylogger.c
	$(CC) -c keylogger.c

keyscan.o: keyscan.c keyscan.h
	$(CC) -c keyscan.c