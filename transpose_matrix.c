 #include<stdio.h>
 int main()
 {
 	int a[2][3],i=0,j=0;
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 			scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=0;i<3;i++)
	 {
	 	for(j=0;j<2;j++)
	 	{
	 		printf("%d\t",a[j][i]);//interchanging row n column
	 		
		 }
		 printf("\n");
	 }
 }
