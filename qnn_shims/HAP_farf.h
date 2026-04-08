#ifndef HAP_FARF_H
#define HAP_FARF_H

#include <stdio.h>

// Mocking FARF error reporting macros used in llama.cpp's hexagon backend
#define ERROR "ERROR"
#define INFO  "INFO"
#define WARN  "WARN"

#define FARF(level, fmt, ...) printf("[%s] " fmt "\n", level, ##__VA_ARGS__)

#endif
