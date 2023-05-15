#include <stdio.h>
#include <stdlib.h>

#define SUM 1
#define SUB 2
#define DIV 3
#define MUL 4

#define POW 7

#define CLS 6

#define EXIT 0
#define HELP 5

extern void sum(float *a, float *b);
extern void sub(float *a, float *b);
extern void divi(float *a, float *b);
extern void mul(float *a, float *b);

extern void c_pow(float *a, float *b);