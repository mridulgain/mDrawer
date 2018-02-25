#define strt 1
#define end 1000
#include<stdio.h>
int isperfect(int);
void main()
{
    int i;
    printf("List of perfect numbers between %d to %d : \n",strt,end);
    for(i=strt; i<end; i++)
    {
	if(isperfect(i) == 1)
		printf("%d ",i);
    }
}
