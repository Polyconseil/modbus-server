# It's bad to have a make file for just a file yet the command is long ...

all: modbus-server.c
	gcc -std=gnu99 modbus-server.c -o modbus-server `pkg-config --libs --cflags libmodbus`

