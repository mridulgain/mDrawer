//prime factor
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number to compute its prime factor : ");
	scanf("%d",&n);
	i=2;
	printf("Prime factors of %d are : ",n);
	while(n!=1)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			n/=i;
		}
		else
			i++;
	}
	printf("\n");
}
