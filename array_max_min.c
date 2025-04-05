#include<stdio.h>
int main()
{
	int a[5],i,max,min;
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<5;i++)
{
	if(a[i]>a[0])
	{
	max=a[i];
	}
}
printf("Maximum element:%d",max);

return 0;
}
