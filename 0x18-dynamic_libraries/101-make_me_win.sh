#!/bin/bash
wget -P /tmp https://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@github.com/NeMualu/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-libwin.so
export LD_PRELOAD=/tmp/101-libwin.so
