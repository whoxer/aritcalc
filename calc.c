#include "calc.h"

static void g_v(float *res) {
    printf("%.2f\n", *res);
}

extern void sum(float *a, float *b) {
    float res;

    float *ptr_a = (float *) malloc(sizeof(float));
    float *ptr_b = (float *) malloc(sizeof(float));

    *ptr_a = *a;
    *ptr_b = *b;

    res = *ptr_a + *ptr_b;

    printf("%.2f + %.2f = ", *ptr_a, *ptr_b);
    g_v(&res);

    free(ptr_a);
    free(ptr_b);
}

extern void sub(float *a, float *b) {
    float res;

    float *ptr_a = (float *) malloc(sizeof(float));
    float *ptr_b = (float *) malloc(sizeof(float));

    *ptr_a = *a;
    *ptr_b = *b;

    res = *ptr_a - *ptr_b;

    printf("%.2f - %.2f = ", *ptr_a, *ptr_b);
    g_v(&res);

    free(ptr_a);
    free(ptr_b);
}

extern void divi(float *a, float *b) {
    float res;

    float *ptr_a = (float *) malloc(sizeof(float));
    float *ptr_b = (float *) malloc(sizeof(float));

    *ptr_a = *a;
    *ptr_b = *b;

    res = *ptr_a / *ptr_b;

    printf("%.2f / %.2f = ", *ptr_a, *ptr_b);
    g_v(&res);

    free(ptr_a);
    free(ptr_b);
}

extern void mul(float *a, float *b) {
    float res;

    float *ptr_a = (float *) malloc(sizeof(float));
    float *ptr_b = (float *) malloc(sizeof(float));

    *ptr_a = *a;
    *ptr_b = *b;

    res = *ptr_a * *ptr_b;

    printf("%.2f + %.2f = ", *ptr_a, *ptr_b);
    g_v(&res);

    free(ptr_a);
    free(ptr_b);
}
