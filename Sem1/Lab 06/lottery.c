#define sz 50//size of array
#include<stdio.h>
#include<stdlib.h>
int search(int *,int,int,int);
void sort(int *,int);
void main()
{
    int n, arr[sz], nat[100], count = 0;
   
   for(n = 0; n < 100; n++)
	nat[n]=0;
//generating & storing random nos without rep
    while(count < sz)
    {
	n = rand()%100;
	if(nat[n] == 0)
	{
	    nat[n] = 1;
	    arr[count++] = n;
	}

    }
    //guess
    printf("Guess a number between 0 to 100 : ");
    scanf("%d",&n);
    //checking...
    sort(arr,sz);
    if(search(arr,0,sz,n) == -1)
	printf("Better luck nxt time!\n");
    else
	printf("Congrats you won!\n");

    printf("Win choices were : ");
    for(n=0;n<sz;n++)
	printf("%d ",arr[n]);
    printf("\n");

    
}
