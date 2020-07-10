/*
Find implementation's ranges for positive numeric data
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <iostream>
#include <iomanip>

int main(int argc, char **argv){
    std::cout << "Range of positive values of type int: 1 . . " << INT_MAX << std::endl;
    std::cout << "Range of positive values of type double: " << std::scientific
              << DBL_MIN << " . . " << DBL_MAX << std::endl;

    return 0;
}