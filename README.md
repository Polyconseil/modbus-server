MODBUS SERVER:
==============

This is a small modbus server to put on the bluebox.

In order to compile it you need to have the libmodbus-dev package installed

The commande to compile the modbus-server is:
gcc -std=gnu99 modbus-server.c -o modbus-server `pkg-config --libs --cflags libmodbus`

