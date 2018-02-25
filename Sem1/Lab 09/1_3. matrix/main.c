#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"
void main()
{
	int op;
	    printf("\tEnter 1 to transpose\n");
	    printf("\tEnter 2 to perform matrix addition\n");
	    printf("\tEnter 3 to perform matrix subtraction\n");
	    printf("\tEnter 4 to perform matrix multiplication\n");
	    printf("Enter choice : ");
	    scanf("%d",&op);
	    int row,col;
	    switch(op)
	    {
		case 1:
		{
			printf("Enter order of your matrix : ");
			scanf("%d%d",&row,&col);
			int a[row][col],b[col][row];
			readmatrix(row,col,a);
			mat_transpose(row,col,a,b);
			showmatrix(col,row,b);
			break;
		}
		case 2: 
		{
			printf("Enter order of your matrices : ");
			scanf("%d%d",&row,&col);
			int c[row][col], d[row][col];
			printf("Enter 1st matrix :\n ");
			readmatrix(row,col,c);
			printf("Enter 2nd matrix :\n ");
			readmatrix(row,col,d);
			int **e = mat_add(row,col,c,d);
			printf("Resulting matrix : \n");
			showmatrix2(row,col,e);
			break;
		}
		case 3: 
		{
			printf("Enter order of your matrices : ");
			scanf("%d%d",&row,&col);
			int c[row][col], d[row][col];
			printf("Enter 1st matrix :\n ");
			readmatrix(row,col,c);
			printf("Enter 2nd matrix :\n ");
			readmatrix(row,col,d);
			int **e = mat_sub(row,col,c,d);
			printf("Resulting matrix : \n");
			showmatrix2(row,col,e);
			break;
		}
		case 4: 
		{
			int row1,col1,row2,col2;
			
			printf("Enter order of your 1st matrix : ");
			scanf("%d%d",&row1,&col1);
			int c[row1][col1];
			printf("Enter 1st matrix :\n ");
			readmatrix(row1,col1,c);
			
			printf("Enter order of your 2nd matrix : ");
			scanf("%d%d",&row2,&col2);
			int d[row2][col2];
			printf("Enter 2nd matrix :\n ");
			readmatrix(row2,col2,d);
			int **e = mat_mult(row1,col1,col2,c,d);
			printf("Resulting matrix : \n");
			showmatrix2(row1,col2,e);
			break;
		}
		default :
			printf("Invalid input\n");
	    }
}
int **creatematrix(int r, int c)
{
	int ** a = NULL;
	a=malloc(r * sizeof(int*));
	for(int i = 0; i < c; i++)
	{
		a[i] = malloc(c * sizeof(int));
	}
	return a;
}
void readmatrix(int r,int c,int a[][c])
{
	for(int i=0;i<r;i++)
	{
		printf("Enter row %d : ",i+1);
		for(int j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
}
void showmatrix(int r,int c,int a[][c])//static 2d
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void showmatrix2(int r,int c,int **a)//dynamic 2d
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}


