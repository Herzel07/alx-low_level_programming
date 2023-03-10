#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create a static library called liball.a from the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o
