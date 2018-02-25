#include<stdio.h>
#include"rational.h"
void main()
{
		//get input
	printf("~~~~~~~~~~~Enter 1st rational : ~~~~~~~~~~\n");
	rational n1 = getrational();
	printf("~~~~~~~~~~~Enter 2nd rational : ~~~~~~~~~~\n");
	rational n2= getrational();
		//show input
	printf("\nYou have entered ");
	putrational(n1);
	printf(" and ");
	putrational(n2);
	printf("\n");
	int op;
	printf("\n\tEnter 1 to add\n\tEnter 2 to subtract\n");
	printf("\tEnter 3 to multiply\n\tEnter 4 to devide\n");
	printf("\nEnter your choice : ");
	scanf("%d",&op);
	rational result;

	//operation list
	switch(op)
	{
		case 1 : 
			result = rat_add(n1,n2);
			break;
		case 2 :
			result = rat_sub(n1,n2);
			break;
		case 3 :
			result = rat_mult(n1,n2);
			break;
		case 4 :
			result = rat_div(n1,n2);
			break;
		default :
			printf("Inavalid input\n");
	}
	//output
	printf("\nResult : ");
	putrational(result);
	printf("\n");
}
