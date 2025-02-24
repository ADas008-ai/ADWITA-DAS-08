#include<stdio.h>
int main()
{
	int count=0,n;
	scanf("%d",&n);
	while(n>0)
	{
		count=count+1;
		n=n/10;
	}
	printf("%d",count);
}
