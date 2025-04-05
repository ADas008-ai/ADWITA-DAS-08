#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter array elements:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Reverse array elements:");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
		
	}
	return 0;
}
