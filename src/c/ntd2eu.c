#include<stdio.h>
#define Exchange_Rate 40.41        /*�{����"�ײv"�HExchange_Rate���*/
int main()
{
	double NT_dollar;  /*��J���s�x������*/
	double Euros;      /*��X���ڤ�����*/
	
	/*1.�q��L�o��s�x������*/

	printf("Please enter NT dollars\n");
	scanf("%lf",&NT_dollar);
	
	/*2.�̾ڶײv���⦨�ڤ�����*/

	Euros=NT_dollar/Exchange_Rate;

	/*3.�N���G(�ڤ�����)��ܦb�ù��W*/

	printf("the amount in Euros=%lf��\n",Euros);

	/*�{������*/

	return 0;    
}