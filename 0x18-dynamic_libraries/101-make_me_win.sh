#!/bin/bash
wget -q -O /tmp/gigalib.so "https://raw.githubusercontent.com/ibrisho/alx-low_level_programming/main/0x18-dynamic_libraries/gigalib.so"
export LD_PRELOAD=/tmp/gigalib.so
