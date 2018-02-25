//Reversing a number
#include<stdio.h>
void main()
{
    int n,temp=0;
    printf("Enter a natural number : ");
    scanf("%d",&n);
    do
    {
	temp = temp*10;
	temp = temp+(n%10);
	n = n/10;
    }while(n != 0);
    printf("Reversed number is : %d\n",temp);
}
