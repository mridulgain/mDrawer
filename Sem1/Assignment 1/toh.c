#define max 100
#include<stdio.h>
#include<string.h>

int getDisk(int);
int moveDisk(int, int);

int a[max], b[max], c[max], n;
int p1 = -1, p2 = -1, p3 = -1;//tower top pointers, empty = -1, full = n-1
int step = 0, prev_src = 0, prev_dest = 0;

void main()
{
	//input
	printf("Enter the number of disks : ");
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
		a[i] = n - i; 		//inserting disks in tower 1 
	p1 = n - 1;//setting pointer to the top
	//processing
	int src, dest;
	if(n % 2 == 0)
		moveDisk(1 , 2);
	else
		moveDisk(1 , 3);
	while(p3 != n - 1)// p3++;
	{
		for(src = 1; src <= 3 && p3 != n - 1; src++)
		{
			int flag = 0, empty_twr = 0;
			for(dest = 1; dest <= 3 && p3 != n - 1; dest++)
			{
				if(src == dest) continue;
				int dest_dsk = getDisk(dest);//same for destination
				int src_dsk = getDisk(src);
				if(src_dsk == -1) continue;
				if(dest_dsk == -1) empty_twr = dest;//remember the empty tower
				if(dest_dsk < src_dsk) continue;
				if(dest_dsk % 2 == 0 && src_dsk % 2 == 0) continue;
				if(dest_dsk %2 != 0 && src_dsk % 2 != 0) continue;
				flag = moveDisk(src, dest);
				if(flag)
				{
					dest = 0;
					flag = 0; empty_twr = 0;
				}
			}
			//no other twr is available & we got an empty twr
			if(flag == 0 && empty_twr != 0)
					moveDisk(src, empty_twr);
					//getchar();//move to an empty tower	
		}
	}	
} 
int getDisk(int twr)
{
	switch(twr)
	{
		case 1 :
			if(p1 != -1)
				return a[p1];
			break;
		case 2 :
			if(p2 != -1)
				return b[p2];
			break;
		case 3 :
			if(p3 != -1)
				return c[p3];
			break;
		default :
			return -1;
	}
}
int moveDisk(int src, int dest)
{
	if(prev_src == dest && prev_dest == src) return 0;
	int disk;
	switch(src)
	{
		case 1 :
			disk = a[p1--];
			break;
		case 2 :
			disk = b[p2--];
			break;
		case 3 :
			disk = c[p3--];
		break;
	}
	switch(dest)
	{
		case 1 : 
			a[++p1] = disk;
			break;
		case 2 :
			b[++p2] = disk;
			break;
		case 3 :
			c[++p3] = disk;
			break;
	}
	prev_src = src;
	prev_dest = dest;
	printf("%d. %d to %d\n",++step, src, dest);
	return 1;
}
