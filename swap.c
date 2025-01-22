#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("original value before swap=%d\n%d\n",a,b);
	c=0;
	c=a;
	a=b;
	b=c;
	printf("after swapping=%d\n%d\n",a,b);
	return 0;
}
	
