#include<stdio.h>
#include<string.h>
#include "list.h"
void main()
{
    int siz;
    do
    {
	printf("Enter number of elements : ");
    	scanf("%d",&siz);
	if(siz <= 0)
	    printf("Invalid size\n");
    }while(siz <= 0);
    //get elements in array
    int list[siz];
    printf("Enter your list (space seperated) : ");
    for(int i = 0; i < siz; i++)
    {
	scanf("%d",&list[i]);
    }
    //give options
    showDetails(list , siz);
    int op;
    do
    {
	printf("\nEnter 1 to modify a particular element of the list\n");
	printf("Enter 2 to modify a sequence of elements\n");
	printf("Enter -1 to exit\nOption : ");
	scanf("%d",&op);
	switch(op)
	{
	    case 1:
	    	editElement(list , siz);
		showList(list , siz);
		showDetails(list , siz);
		break;
	    case 2:
	    	editSeq(list , siz);
		showList(list , siz);
		showDetails(list , siz);
		break;
	    case -1:
	    	break;
	    default:
	    	printf("Invalid option\n");
	}
    }while(op != -1); 
}
