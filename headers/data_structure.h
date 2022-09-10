#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

typedef struct Input Input;
struct Input {
    int size;
    float *data;
};

typedef struct Weight Weight;
struct Weight {
    int size;
    float *data;
};


float calc_output(Input input, Weight weight,int bias);