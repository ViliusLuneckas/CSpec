#include "cspec.h"

typedef struct
{
  const char * last_name;
  int passed;
  int failed;
  int pending;
} Cspec_struct;
int initialized = 0;

Cspec_struct CSpec;

void CSpec_init()
{
  CSpec.passed = 0;
  CSpec.failed = 0;
  CSpec.pending = 0;
  CSpec.last_name = NULL;
  initialized = 1;
}

void it_f(const char * test_name)
{
  if (!initialized) CSpec_init();
  CSpec.last_name = test_name;
}

//matchers
void should(char * assert, ...)
{
  va_list args;
  va_start(args, assert);
  if (strcmp(assert, "beEqual") == 0) {
    int a = va_arg(args, int);
    int b = va_arg(args, int);
    if (a == b){
      printf(".");
    }else{
      printf("\nFailure: %s\n\t%i expected to be %i\n", CSpec.last_name, b, a);
    }
  }else{
    printf("*");
  }
  va_end(args);
}
