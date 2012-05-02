#include "array.h"

Array * Array_new()
{
  Array * new_array = (Array*)malloc(sizeof(Array));
  new_array->length = 0;
  new_array->data = NULL;
  return new_array;
}

void Array_push(Array * ptr, long el)
{
  long * new_data = (long*)malloc(sizeof(long) * ptr->length + 1);
  int i;
  for (i = 0; i < ptr->length; i++)
    new_data[i] = (ptr->data)[i];
  new_data[ptr->length] = el;
  free(ptr->data);
  ptr->data = new_data;
  ptr->length++;
}

long Array_at(Array * ptr, int index)
{
  if (index < ptr->length)
    return ptr->data[index];
  return 0;
}
