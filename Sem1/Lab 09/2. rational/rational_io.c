#include<stdio.h>
#include"rational.h"
rational getrational()
{
	int p,q;
	printf("Enter nominator(p) : ");
	scanf("%d",&p);
	printf("Enter denominator(q) : ");
	scanf("%d",&q);
	rational a;
	a.p = p;
	a.q = q;
	return a;
}

void putrational(rational a)
{
	if(a.q == 0)
		printf("Undefined");
	else if(a.p == 0)
		printf("0");
	else if(a.p == 1 && a.q == 1)
		printf("1");
	else
		printf("%d/%d",a.p,a.q);
}
