#include<stdio.h>
void main()
{
	int yr;
	printf("enter year:");
	scanf("%d",&yr);
	if(yr%4==0 && yr%100!=0)
	{
		printf("leap year");
	}
	else if(yr%400==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
}
