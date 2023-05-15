#include "calc.h"
#include <math.h>

static void g_v(float *res) {
    printf("%.2f\n", *res);
}

extern void c_pow(float *a, float *b) {
    float res;

    float *ptr_a = (float *) malloc(sizeof(float));
    float *ptr_b = (float *) malloc(sizeof(float));

    *ptr_a = *a;
    *ptr_b = *b;

    res = pow(*ptr_a, *ptr_b);

    printf("%.2f^%.2f = ", *ptr_a, *ptr_b);
    g_v(&res);

    free(ptr_a);
    free(ptr_b);
}