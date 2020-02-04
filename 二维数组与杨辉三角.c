#include<stdio.h>
#define N 100
int main()
{
	int i,j,n,l,a[N][N];
	printf("请输入杨辉三角的行数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	a[i][0]=a[i][i]=1;
	for(i=2;i<n;i++)
	for(j=1;j<i;j++)
	a[i][j]=a[i-1][j-1]+a[i-1][j];
	for(i=0;i<n;i++)
	{
	   for(l=0,j=0;l<n-i;l++)
		printf(" ");
		for(j=0;j<=i;j++)
		printf("%3d",a[i][j]);
		printf("\n");
	}
	return 0;
 } 
