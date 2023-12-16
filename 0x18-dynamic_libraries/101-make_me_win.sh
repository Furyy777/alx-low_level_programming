#!/bin/bash
gcc -shared -o libgiga.so -fPIC test.c
export LD_PRELOAD=/tmp/libgiga.so:$LD_LIBRARY-PATH