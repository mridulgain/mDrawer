#include<stdio.h>
#include "list.h"
void editSeq(int *list, int siz)
{
    int l,r;
    do
    {
	printf("Enter the position range (between 1 to %d) you want to modify : ",siz);
	scanf("%d%d",&l,&r);
	if(l > r || r > siz || l < 1)
	    printf("Invalid input\n");
    }while(l >r || r > siz || l < 1);
    l--;
    printf("Enter new elements (space seperated) : ");
    for(int i = l; i < r; i++ )
	scanf("%d",&list[i]);
}
