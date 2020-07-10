#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char *argv[])
{
    int a=30,b=10,c=20;
    bool value;
    
    value = (a>b && a>c);
    std::cout << "(a>b && a>c): " << value << std::endl;    /*  1:true	*/
    value = (a>b || a<c);
    std::cout << "(a>b || a<c): " << value << std::endl;    /*  1:true	*/
    value = !(a>b);
    std::cout << "(!(a>b)): " << value << std::endl;        /*  0:false	*/
	
    return 0;
}