#!/bin/bash
wget -P /temp https://github.com/sadatmisr/alx/blob/main/0x18%20C%20-%20Dynamic%20libraries/libgiga.so
export LD_PRELOAD=/temp/libgiga.so
