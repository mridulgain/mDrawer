#include "matrix.h"
int ** mat_add(int r,int c,int a[][c],int b[][c])
{
	int **x=creatematrix(r,c);
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			x[i][j] = a[i][j] + b[i][j];
	return x;
}
