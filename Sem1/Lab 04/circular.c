//Circular prime number

#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Enter the number to check if its circular prime or not : ");
    scanf("%d",&n);
    if(n < 0)
    {
	printf("Enter a natural number\n");
    }
    else
    {
    //no of digit
    int temp = n,digt_count = 1;
    do
    {
	temp = temp/10;
	digt_count++;

    }while(temp != 0);
    
    int den=1,i;
    for(i = 1; i < digt_count-1; i++)
    {
	den = den*10;
    }

    //generating circular numbers
    int ldigit,loop = digt_count,prime_count = 0;
    do
    {
	ldigit = n/den;
	n = n %den;
	n = n*10;
	n = n + ldigit;

	//check if generated n is prime
	int flag = 0;
	for(i = 2; i <= sqrt(n); i++)
	{
	    if(n % i == 0)
	    {
		flag++;
	    }
	}
	if(flag == 0)
	{
	    prime_count++;
	}
	else
	    break;
	loop--;
    }while(loop > 0);
    
    if(prime_count == digt_count)
    {
	printf("Entered number is circular prime\n");
    }
    else
    {
	printf("Entered number is not circular because %d is non prime\n",n);
    }
    }
		
}
