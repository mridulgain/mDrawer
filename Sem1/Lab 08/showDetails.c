#include<stdio.h>
#include "list.h"
//to calculate min max and range
void showDetails(int *list, int siz)
{
    int max = list[0], min = list[0];
    for(int i = 0; i < siz ; i++)
    {
	if(max < list[i])
	    max = list[i];
	if(min > list[i])
	    min = list[i];
    }
    int range = max - min;
    printf("\tMax element : %d\n",max);
    printf("\tMin element : %d\n",min);
    printf("\tRange of the given elements : %d\n",range);
}
