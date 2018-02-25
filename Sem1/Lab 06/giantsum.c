#define sz 100
#include<stdio.h>
#include<string.h>
void main()
{
    char p[sz], q[sz], r[sz+1];
    printf("Enter 1st number : ");
    scanf("%s",p);
    printf("Enter 2nd number : ");
    scanf("%s",q);
    int m = (int)strlen(p), n = (int)strlen(q), k = 0;
   if(m > n)
       k = m ;
   else
       k = n ;
//    printf("%d",k);
   
    int car = 0,sum,temp;
    while(n>=0)
    {
	temp  = p[m--] + q[n--] - 2 * '0' + car;
	sum = temp % 10;
	car = temp / 10;
	r[k--] =  sum + '0';
    }
    while(m>=0)
    {
	temp = p[m--] - '0' + car;
	sum = temp % 10;
	car = temp / 10;
	r[k--] = sum + '0';
    }
    r[k] = car + '0';
    puts(r);

}
