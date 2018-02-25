typedef struct node
{
    char data;
    struct node *ptr;
}node;
typedef node stack;
void push(node **, char);
char pop(node **);
