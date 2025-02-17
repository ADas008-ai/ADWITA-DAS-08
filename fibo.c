#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		sum=a+b;
		a=b;
		b=sum;
	}
}
