#!/bin/bash
wget -P /temp https://github.com/kazeneza-zephilin/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdonot.so
export LD_PRELOAD=/temp/libdonot.so
