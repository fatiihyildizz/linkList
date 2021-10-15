#ifndef LINKLIST_H_
#define LINKLIST_H_

#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"

struct node_8{
    uint8_t data;
    struct node_8* nextAdr; 
};

struct node_16{
    uint16_t data;
    struct node_16* nextAdr; 
};

struct node_32{
    uint32_t data;
    struct node_32* nextAdr; 
};

struct node_64{
    uint64_t data;
    struct node_64* nextAdr; 
};

#endif 