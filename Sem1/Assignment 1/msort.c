#include<stdio.h>
void merge(int *, int, int *, int);//(array1,no of terms in 1, array2, no of terms in 2)
int main()
{
	while(1)
	{
		int n;
		//1. input : list of integer
		printf("Enter number of elements in your list : ");
		scanf("%d",&n);
		if(n <= 0)//validation
		{
			printf("Invalid input. Try again....\n");
			continue;
		}
		int a[n];
		printf("Enter the elements (seperated by space) : ");
		for(int i = 0; i < n; i++)
			scanf("%d",&a[i]);
		int loop = n, p, terms = 1;//expected no of terms in each array to be merged
		//2. iterative merge sort
		while(loop > 0)
		{
			int p = 0;//point initial block
			while(p + terms < n)//untill or unless 1st array has enough terms
			{
				int j = p + terms;//index of array2
				if(j + terms - 1 > n - 1 )	//check if array2 has enough terms
					merge(&a[p], terms, &a[j], n - j);//no
				else
					merge(&a[p], terms, &a[j], terms);//yes
				
				p = j + terms;//point to nxt block
			}
			terms = terms * 2;
			loop = loop / 2;
		}
		//3. output : sorted list
		printf("Sorted list : ");
		for(int i = 0; i < n; i++)
			printf("%d ",a[i]);
		printf("\n");		
		break;//exit successfully
	}
	
}

void merge(int a[], int n1, int b[], int n2)
{
	int c[n1+n2], i = 0, j = 0, k = 0;
	while(i < n1 && j < n2)
	{
		if(a[i] < b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
	}
	
	while(i < n1)//if array 1 is not empty yet
		c[k++] = a[i++];
		
	while(j < n2)//same deal with array 2
		c[k++] = b[j++];
	
	//mod: a[] & b[] both are part of same list so.....
	for(k = 0, i = 0 ; i < n1 + n2 ; i++, k++)
		a[k] = c[i];
}
/*
output case 1:
--------------------
*/
