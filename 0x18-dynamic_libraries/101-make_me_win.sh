#!/bin/bash

echo -e '#include <stdio.h>\n#include <stdlib.h>\n\nint rand(void) { return 9; }\n' > /tmp/cheat.c
gcc -shared -fPIC -o /tmp/cheat.so /tmp/cheat.c
LD_PRELOAD=/tmp/cheat.so

