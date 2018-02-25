#include<stdio.h>
main()
{
	int marks, max1 = -1, max2 = -1;
	do
	{
	    printf("Enter marks or -1 to exit: ");
	    scanf("%d",&marks);
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
	    printf("2nd Maximum :%d",max2);
}
