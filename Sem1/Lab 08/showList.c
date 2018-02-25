#include<stdio.h>
void showList(int *list, int siz)
{
    printf("List : ");
    for(int i = 0; i < siz; i++ )
    {
	printf("%d ",list[i]);
    }
    printf("\n");
}
