#include<stdio.h>
#include "list.h"
void editElement(int *list, int siz)
{
    int index;
    do
    {
    	printf("Enter position(1 to %d) you want to modify : ",siz);
    	scanf("%d",&index);
	if(index < 1 || index > siz)
	    printf("Invalid input\n");
    }while(index < 1 || index > siz);
    printf("Enter new value : ");
    scanf("%d",&list[--index]);
}
