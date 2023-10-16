#!/bin/bash
wget https://github.com/yahyaHadar/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so -P ../
export LD_PRELOAD=../libgiga.so
