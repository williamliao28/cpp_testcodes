#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char **argv)
{
    int a=10, b=3;
    std::cout << "a<b: " << (a<b) << std::endl;     /*  0:false 	*/
	std::cout << "a>b: " << (a>b) << std::endl;     /*  1:true  	*/
	std::cout << "a==b: " << (a==b) << std::endl;  	/*  0:false 	*/
	std::cout << "a!=b: " << (a!=b) << std::endl; 	/*  1:true  	*/
	
	return 0;
}
