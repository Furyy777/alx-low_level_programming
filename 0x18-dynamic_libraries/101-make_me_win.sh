#!/bin/bash
wget -P https://github.com/Furyy777/alx-low_level_programming/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so