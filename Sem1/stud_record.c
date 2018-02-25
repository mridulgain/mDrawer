#define filename "studentdb.bin"
#include<stdio.h>
#include<string.h>
#include"record.h"
FILE *fp = NULL;
void main()
{
	student s;
	fp = fopen(filename,"rb+");
	int op;
	do
	{
		printf("~~~~~~~~~~~~\n");
		printf("1 to add\n2 to edit\n3 to search\n4 to delete\n5 to display whole file\n0 to exit\nchoice : ");
		scanf("%d",&op);
		switch(op)
		{
			case 1 :
				s = getdata();
				adddata(s);
				break;
			case 2 :
			{	char key[7];	
				printf("Enter roll to modify : ");
				scanf("%s",key);
				int i = searchfile(key);
				if(i)
				{
					s = getdata();
					fseek(fp, i-1 ,SEEK_SET);
					fwrite(&s, sizeof(student), i, fp);
				}
				else 
					printf("Not found\n");
				break;
			}
			case 3 :
			{
				char key[7];	
				printf("Enter roll to search : ");
				scanf("%s",key);
				int i = searchfile(key);
				if(i)
					printf("Found at %d\n",i);
				else 
					printf("Not found\n");
				break;
			}
			case 4 :
			{
				char key[7];	
				printf("Enter roll to DELETE : ");
				scanf("%s",key);
				int i = searchfile(key);
				if(i)
				{
					student s;
					strcpy(s.roll,"#DELETED#");
					fseek(fp, i-1 ,SEEK_SET);
					fwrite(&s, sizeof(student), i, fp);

				}					
				else 
					printf("Not found\n");
				break;
			}
			case 5 :
				displayfile();
				break;
			default :
				printf("Not ready");
			break;
			
		}
		
		
	}while(op);
	
}
student getdata()//keyboard
{
	student s;
	printf("Enter roll : ");
	scanf("%s",s.roll);
	printf("Enter first name : ");
	scanf("%s",s.fname);
	printf("Enter last name : ");
	scanf("%s",s.lname);
	printf("Enter city : ");
	scanf("%s",s.city);
	printf("Enter phone no : ");
	scanf("%s",s.phone);
	printf("Enter email : ");
	scanf("%s",s.email);
	return s;
}
void putdata(student s)
{
	printf("\tRoll : %s\n",s.roll);
	printf("\tName : %s %s\n",s.fname,s.lname);
	printf("\tCity : %s\n",s.city);
	printf("\tPhone : %s\n",s.phone);
	printf("\tEmail : %s\n",s.email);
}
void adddata(student s)//to file
{
	fseek(fp, 0, SEEK_END);
	if(!searchfile(s.roll))
		fwrite(&s, sizeof(student), 1, fp);
	else
		printf("Roll number is primary key. Duplication not allowed\n");
}
void displayfile()
{
	fseek(fp, 0 , SEEK_SET);
	student s;
	while( fread(&s, sizeof(student), 1, fp)!= 0 )
	{
		printf("~~~~~~~~~~~~~~~~\n");
		if(strcmp(s.roll,"#DELETED#"))
			putdata(s);
	}
}
int searchfile(char *key)
{
	fseek(fp, 0, SEEK_SET);
	student s;
	int index = 0;
	while(fread(&s, sizeof(student), 1, fp) != 0)
	{
		index++;
		if(!strcmp(s.roll,key))
			return index;
	}
	return 0;
}
void modifyfile(student s,int i)
{
	fseek(fp, i-1 ,SEEK_SET);
	fwrite(&s, sizeof(student), i, fp);	
}
