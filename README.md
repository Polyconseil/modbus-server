MODBUS SERVER:
--------------

Ths is a modbus automation simulator.

In order to compile it you need to have the libmodbus-dev package installed
The command to compile the modbus-server is: gcc -std=gnu99 modbus-server.c -o modbus-server pkg-config --libs --cflags libmodbus
