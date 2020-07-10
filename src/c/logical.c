#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a=30,b=10,c=20;
    printf(" %d \n", a>b && a>c); 	/*  1:true	*/
    printf(" %d \n", a>b || a<c);   /*  1:true 	*/
    printf(" %d \n", !(a>b));      /*  0:false 	*/
	
    return 0;
}
