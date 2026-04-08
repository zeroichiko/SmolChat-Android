#ifndef HEXAGON_TYPES_H
#define HEXAGON_TYPES_H

#include <stdint.h>

typedef int32_t fixed_point_t;
typedef uint32_t hexagon_udma_descriptor_type1_t; 

// Standard Qualcomm Hexagon error codes (AEE)
#define AEE_ESUCCESS 0
#define AEE_EOFFSET  0x8000

struct hexagon_udma_descriptor_type1 {
    uint32_t desctype;
    uint32_t dstate;
    uint64_t address;
    uint32_t length;
};

#endif
