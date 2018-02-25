#include<stdio.h>
#include<string.h>
void showfileDetails(char *);
void main(int argc, char** args)
{
	if(argc != 2)
	{
	    printf("Invalid input..less or more cmd line arguments\n");
	}
	else
	    showfileDetails(args[1]);
}
void showfileDetails(char *fname)
{
    printf("Given file name : %s\n\n",fname);
    FILE *fp = fopen(fname, "r");
    if(fp == NULL)
    {
	printf("Error opening file\n");
	return;
    }
    char line[100] , *word;
    int lcount = 0,wcount = 0;
    char deli[8]=" \t\n-_,.";
    while( fgets(line,100,fp) != NULL )
    {
	lcount++;
	printf("Line : %d\n",lcount);
	word = strtok(line,deli);
	while(word != NULL)
	{
	    wcount++;
	    printf("%d : ",wcount);
	    puts(word);
	    word = strtok(NULL,deli);
	}
	//puts(line);
	puts("");

    }
    printf("No of lines : %d\n",lcount);
    printf("No od words : %d\n",wcount);
}
