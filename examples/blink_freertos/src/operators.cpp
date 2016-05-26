#include "FreeRTOS.h"

void *operator new(size_t size) {
    return pvPortMalloc(size);
}

void *operator new[](size_t size) {
    return operator new(size);
}

void operator delete(void *pointer) {
    vPortFree(pointer);
}

void operator delete(void *pointer, size_t size) {
    vPortFree(pointer);
}

void operator delete[](void *pointer) {
    operator delete(pointer);
}

void operator delete[](void *pointer, size_t size) {
    operator delete(pointer);
}