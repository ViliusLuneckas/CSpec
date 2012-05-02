#ifndef _CSPEC_H
#define _CPSEC_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#ifdef __DEBUG__
#define DEBUG_PRINT(...) do{ fprintf( stderr, __VA_ARGS__ ); } while(0)
#else
#define DEBUG_PRINT(...) do{ } while (0)
#endif

#define it(...) do{ it_f(__VA_ARGS__);} while(0);


void it_f(const char * test_name);

//matchers
void should(char * assert, ...);
#endif
