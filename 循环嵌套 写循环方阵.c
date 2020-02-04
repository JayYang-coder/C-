#include<stdio.h>
int main()
{
	int i,j,k,t,m,h;
	printf("请输入方阵m：");
	scanf("%d",&m);
	printf("方阵排列如下：\n"); 
	for(i=0;i<=m;i++)
	{
		for(j=0;j<m;j++)
		{
		t=(i+j)%m;//确定方阵第i行的第一个数字 
		for(k=0;k<m;k++)//按照环的形式输出该行中的各个元素 
		{
		h=(k+t)%m+1;
		printf("%2d",h);
	    }
		printf("\n");	
		}
		printf("\n");
	}
 
 } 
