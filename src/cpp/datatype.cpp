/* This example shows different data types
   declaration and output formats. */
/* 型別宣告與輸出格式範例*/

#include<stdio.h>
#include<math.h>
#include<iostream>

int main(int argc, char **argv){
    int a1, a2;
    float b;
    double c;
    
    a1 = 234;
    a2 = -234;
    // Displaying integers using different placeholders
    std::cout << a1 << std::endl;
    std::cout.width(4);
    std::cout << a1 << std::endl;
    std::cout.width(5);
    std::cout << a1 << std::endl;
    std::cout.width(6);
    std::cout << a1 << std::endl;

    std::cout << "\n";

    std::cout.width(4);
    std::cout << a2 << std::endl;
    std::cout.width(5);
    std::cout << a2 << std::endl;
    std::cout.width(6);
    std::cout << a2 << std::endl;
    std::cout << a2 << std::endl;

    std::cout << "\n";

    // Displaying floating point numbers
    b = sqrt(2);
    c = sqrt(2);

    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(3);
    std::cout << b << "\t" << c << std::endl;
    std::cout.precision(4);
    std::cout << b << "\t" << c << std::endl;
    std::cout.precision(5);
    std::cout << b << "\t" << c << std::endl;

    std::cout << "\n";

    std::cout.precision(10);
    std::cout << "single precision: " << b << std::endl;
    std::cout << "double precision: " << c << std::endl;

    return 0;
}