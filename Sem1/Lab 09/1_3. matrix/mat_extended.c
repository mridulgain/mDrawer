#include"matrix.h"
int ** mat_mult(int row1,int col,int col2,int a[][col],int b[][col2])
{
	int **c = creatematrix(row1,col2);
	for(int i=0 ; i<row1; i++)
	{
	    for(int j = 0; j < col2; j++)
	    {
		c[i][j] = 0;
		for(int k = 0; k < col ; k++)
		    c[i][j] += a[i][k] * b[k][j];
	    }
	}
	return c;
}

int ** mat_sub(int row,int col,int a[][col],int b[][col])
{
    int ** c = creatematrix(row,col);
    for(int i = 0; i < row; i++)
    	for(int j = 0; j < col; j++)
	    	c[i][j] = a[i][j] - b[i][j];
    return c;
}
