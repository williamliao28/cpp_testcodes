#include<stdio.h>
#define Exchange_Rate 40.41        /*程式中"匯率"以Exchange_Rate表示*/
int main()
{
	double NT_dollar;  /*輸入的新台幣幣值*/
	double Euros;      /*算出的歐元幣值*/
	
	/*1.從鍵盤得到新台幣幣值*/

	printf("Please enter NT dollars\n");
	scanf("%lf",&NT_dollar);
	
	/*2.依據匯率換算成歐元幣值*/

	Euros=NT_dollar/Exchange_Rate;

	/*3.將結果(歐元幣值)顯示在螢幕上*/

	printf("the amount in Euros=%lf€\n",Euros);

	/*程式結束*/

	return 0;    
}