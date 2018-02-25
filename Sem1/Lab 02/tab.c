#include<stdio.h>
void main()
{
    int i,j;
    for(i=10; i<=20; i++)
    {
	printf("----------Table of %d-----------\n",i);
	for(j=1; j<=10; j++)
	{
	    printf("         %d x %d = %d\n",i,j,i*j);
	}
    }
}

