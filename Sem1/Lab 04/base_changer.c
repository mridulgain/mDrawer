//Represent the inputed no in a diffrent base
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int in_base, out_base, num;
    printf("Enter a number,its bae & the desired base : ");
    scanf("%d %d %d", &num, &in_base, &out_base);
    int deci = 0, temp = num, multi = 1, temp2;
   //convert into decimal
   do
   {
	temp2 = temp%10;
	if(temp2 > in_base-1)
	{
	    printf("Invalid number for given base\n");
	    exit(0);
	}
	deci = deci + (temp2 * multi);
	multi = multi * in_base;
	temp = temp / 10;
    }while(temp > 0);
 //   printf("deci = %d\n",deci);
    //convert into target base
    int output = 0;
    multi = 1;
    do
    {
	temp = deci % out_base;
	temp = temp * multi;
	output = output + temp;
	multi = multi * 10;
	deci = deci / out_base;
    }while(deci > 0);

    printf("base%d = %d\n",out_base,output);
}
