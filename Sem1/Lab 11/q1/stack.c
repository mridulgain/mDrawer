#include"stack.h"
#include<stdlib.h>
void push(node **top, char a)
{
    	node *temp = (node *)malloc(sizeof(node));
	temp->data = a;
	temp->ptr = *top;
	*top = temp;

}
char pop(node **top)
{
    if(*top == NULL) return 0;
    
    node *temp = *top;
    char c = temp->data;
    *top = temp->ptr;
    free(temp);
    return c;
}
