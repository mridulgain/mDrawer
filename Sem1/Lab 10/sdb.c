#define max 100
#include<stdio.h>
typedef struct student
{
    char rNo[10];
    char name[20];
    int marks[6];
    int total;
}stud;

stud getdata();//get a single studelt data
void sortdata(stud *,int);
void showdata(stud);//prints a single students data
void main()
{
    	int n;
	printf("Enter number of data : ");
	scanf("%d",&n);
	stud record[max];
	for(int i = 0; i < n; i++ )
	{
	    printf("\tStudent %d :\n",i+1);
	    record[i] = getdata();
	}
	sortdata(record,n);
	printf("Academic data :\n");
	printf("Roll\tName\t");
	for(int i = 0; i < 6; i++)
	    printf("Sub%d\t",i+1);
	printf("Tolal\n");

	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	for(int i = 0; i < n; i++)
	{
	    showdata(record[i]);
	}
}
stud getdata()
{
    stud s;
    printf("Enter roll :  ");
    scanf("%s",s.rNo);
    printf("Enter name : ");
    scanf("%s",s.name);
    printf("Enter marks of 6 subjects(space seperated) : ");
    s.total = 0;
    for(int i = 0; i < 6; i++)
    {
	scanf("%d",&s.marks[i]);
	s.total += s.marks[i];
    }
    return s;
}
void showdata(stud a)
{
	printf("\n%s\t%s\t",a.rNo,a.name);
	for(int i = 0; i < 6; i++)
	    printf("%d\t",a.marks[i]);
	printf("%d\n",a.total);
}
void sortdata(stud *r, int n)//selection
{
    for(int i = 0; i < n-1; i++)
    {
	for(int j = i+1; j < n; j++)
	{
	    if(r[i].total < r[j].total)
	    {
		stud temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	    }
	}
    }
}
