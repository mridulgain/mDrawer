#include<stdio.h>
#include"stack.h"
#include<stdlib.h>
void main(int argc, char **args)
{
    if(argc != 2)
    {
	printf("Invalid input\n");
	exit(0);
    }
    char *s = &args[1][0];
    printf("\nGiven expression : ");
    puts(args[1]);
    stack *top = NULL;
    int flag = 0;
    
    while(*s!='\0')
    {
    	if(*s == '(' || *s == ')')
		printf("%c ",*s);	
	if( *s == '(')
	{
		//printf("%d ",top);
	    push(&top, *s);
	    //printf("%d push\n",top);
	}
	else if( *s == ')')
	{
	//printf("%d ",top);
	    if(top == NULL)
	    {
		flag = 1;
		//printf("war\n");
		break;
	    }
	    else
	    {
	    	//printf("pop\n");
		pop(&top);
            }
	}
	s++;
    }
   // printf("%d %d\n",top,flag);
    if(top == NULL && flag ==0)
	printf("Valid!\n");
    else
	printf("Invalid\n");

}
