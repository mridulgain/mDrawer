//miscelenious
#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int x[n], i;
	float avg = 0;
	// taking input number 
	printf("Enter the elements of array : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&x[i]);
		avg += x[i];
	}
	avg /= n;//calculating average
	printf("a. Average for given data : %g\n",avg);
	//calculating sd
	float sd = 0;
	for(i = 0; i < n; i++)
	{
		sd += (x[i] - avg) * (x[i] - avg); 
	}	
	sd /= n;			
	sd = sqrt(sd);
	printf("b. Standard deviation for given data : %g\n",sd);
	//finding unique elements
	printf("c. Unique elements from the list are : ");
	int x2[n],j,k,flag;
	for(i = 0; i < n; i++)
		x2[i] = 0;
	for(i = 0,j = 0; i < n; i++)
	{
		flag = 0;
		//if x[i] has already in x2[] 
		for(k = 0; k < n; k++)
			if(x2[k] == x[i])
				flag = 1;
		if(flag != 1)//if not then 
			x2[j++] = x[i];
	}
	for(i = 0; i < j; i++)
		printf("%d ",x2[i]);
	printf("\n");
}
