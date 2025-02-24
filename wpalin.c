#include<stdio.h>
int main()
{
	int n,rev,m;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rev=(rev*10)+(n%10);
		n=n/10;
		
	}
	if(rev==m)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
}
