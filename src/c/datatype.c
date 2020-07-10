/* This example shows different data types
   declaration and output formats. */
/* 型別宣告與輸出格式範例*/

#include<stdio.h>
#include<math.h>

int main(int argc, char **argv){
    int a1, a2;
    float b;
    double c;
    
    a1 = 234;
    a2 = -234;
    // Displaying integers using different placeholders
    printf("%d\n",a1);
    printf("%4d\n",a1);
    printf("%5d\n",a1);
    printf("%6d\n",a1);

    printf("\n");

    printf("%4d\n",a2);
    printf("%5d\n",a2);
    printf("%6d\n",a2);
    printf("%2d\n",a2);

    printf("\n");

    // Displaying floating point numbers
    b = sqrt(2);
    c = sqrt(2);

    printf("%.3f\t%.3f\n",b,c);
    printf("%.4f\t%.4f\n",b,c);
    printf("%.5f\t%.5f\n",b,c);

    printf("\n");

    printf("single precision: %.10f\n",b);
    printf("double precision: %.10f\n",c);

    return 0;
}