#include<stdio.h>
int main()
{
	int a1[2][2],a2[2][2],i=0,j=0,sum[2][2];
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&a1[i][j]);
		}
		
	  }  
	  	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&a2[i][j]);
		}
		
	  }
	  for(i=0;i<2;i++)
	  {
	  	for(j=0;j<2;j++)
	  	{
	  		sum[i][j]=a1[i][j]+a2[i][j];
	  		printf("%d\t",sum[i][j]);
		  }
		  printf("\n");
		}  
		return 0;
}
