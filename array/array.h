#ifndef _ARRAY_H
#define _ARRAY_H

#include <stdlib.h>

typedef struct {
  int length;
  long * data;
} Array;

Array * Array_new();
void Array_push(Array * ptr, long el);
long Array_at(Array * ptr, int index);

#endif
