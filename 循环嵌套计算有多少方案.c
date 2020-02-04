/*9个球中（红3白4蓝2），取6个，求解有多少种方法；循环的嵌套*/
#include<stdio.h>
int main()
{
	int i,j,count;
	printf("\t 红球 白球 蓝球\n");
	printf("-----------------------\n");
	for(i=0;i<=3;i++)
	for(j=0;j<=4;j++)
	if((6-i-j)<=2&&(6-i-j)>=0)
	{
		count++;
		printf("方案%d:%5d%5d%5d\n",count,i,j,6-i-j);
	 } 
 } 
