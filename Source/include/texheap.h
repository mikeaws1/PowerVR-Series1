//
// Created by Micha on 19.05.2024.
//

#ifndef POWERVR_TEXHEAP_H
#define POWERVR_TEXHEAP_H
#include <texapi.h>
#include <tmalloc.h>

typedef struct texheapstruct
{
    TEXTUREHEAP	TexHeap;
    MNODE MemoryRoot;
    int RefCounter;
    TEXAPI_IF TexIF;
//	MNODE_BLOCK MemBlock[8];
    MNODE_BLOCK MemBlock[10];
} TexHeapStruct;


#endif //POWERVR_TEXHEAP_H
