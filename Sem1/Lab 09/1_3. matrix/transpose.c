#include "matrix.h"
void mat_transpose(int r,int c,int a[][c],int b[][r])
{
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			b[j][i] = a[i][j];
	
	return ;
}
