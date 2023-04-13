#ifndef __BUBBLE_H__
#define __BUBBLE_H__
#include "print.h"

void bubble(void *base, int num, int size, int (*compar) (const void* p1, const void* p2));
void bubble_test();

#endif
