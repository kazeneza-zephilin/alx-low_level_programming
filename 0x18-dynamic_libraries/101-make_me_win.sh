#!/bin/bash
wget -P /temp https://github.com/kazeneza-zephilin/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lib_printf.so
export LD_PRELOAD=/temp/lib_printf.so ./gm 9 8 10 24 75 9
