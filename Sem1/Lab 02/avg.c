#include<stdio.h>
main()
{
	int marks, max1 = -1, max2 = -1, total = 0, count = -1;
	do
	{
	    count++;
	    printf("Enter marks or -1 to exit: ");
	    scanf("%d",&marks);
	    if(marks != -1)
		total+=marks;
	    if(marks > max2)
	    {
		max2=marks;
		if(max2 > max1)
		{
		    max2 = max1;
		    max1 = marks;
		}
	    }
	 }while(marks != -1);
	if(max1 >= 0)
	    printf("Maximum : %d\n",max1);
	if(max2 >= 0)
	    printf("2nd Maximum :%d\n",max2);
	float avg=total/count;
	printf("Average marks : %g",avg);
}
