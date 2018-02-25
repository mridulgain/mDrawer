//generate magic square of order n
#include<stdio.h>
int main()
{
	int n;
	//read matrix size
	do
	{
		printf("Enter the size of your magic square : ");
		scanf("%d",&n);
		if(n < 1 || n % 2 == 0)
			printf("Invalid entry\n");
	}while(n < 1 || n % 2 == 0);
	//
	int sq[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			sq[i][j] = 0;
	int x = 0, y = n / 2;//co ordinates
	//populate magic sq
	for(int i = 1; i <= n * n; i++)
	{
	    
		if(sq[x][y] == 0)//if empty
			sq[x][y] = i;
		else
		{
			x+=2; y--;
			sq[x][y] = i;
		}

		x--; y++;

		if(x < 0 && y > n - 1)//row & col index both out of bound
		{
			x += 2;
			y--;
		}
		else if(x < 0)//only row index out of bound
			x = n - 1;
		else if(y > n - 1)//only col index out of bound
			y = 0;		
	}
	//print magic sq
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%3d  ",sq[i][j]);
		printf("\n");
	}
	
}
