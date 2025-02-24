#include<stdio.h>
int main()
{
	int n,m,sum=0;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		sum=sum+pow(n%10,3);
		n=n/10;
	}
	if(sum==m)
	{
		printf("Armstrong no");
	}
	else
	{
		printf("Not Armstrong  no");
	}
} 
