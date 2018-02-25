//Integer division using addition & substraction
#include<stdio.h>
void main()
{
	int divisor,dividend;
	printf("Enter the divisor and dividend : ");
	scanf("%d%d",&divisor,&dividend);
	int q = -1, rem = 0;
	do
	{
		dividend -= divisor;
		q++;
	}while(dividend >= 0);
	rem = dividend + divisor;
	printf("Quotient : %d\nRemainder : %d\n",q,rem);
	
}
