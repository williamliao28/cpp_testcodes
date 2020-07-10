/*
Find implementation's ranges for positive numeric data
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char **argv){
    printf("Range of positive values of type int: 1 . . %d\n", INT_MAX);
    printf("Range of positive values of type double: %e . . %e\n", DBL_MIN, DBL_MAX);

    return 0;
}