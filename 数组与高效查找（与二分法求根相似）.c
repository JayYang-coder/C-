#include<stdio.h>
#define N 20
int main()
{
	int i,low,high,mid,score[N],x;
	low=0,high=N-1;
	printf("递增输入学生的成绩数据：\n");
	for(i=0;i<N;i++)
	scanf("%d",&score[i]);
	printf("请输入要查找的成绩数据：\n");
	scanf("%d",&x);
	while(low<high)
	{
		mid=(low+high)/2;
		if(x==score[mid])break;
		else if(x>score[mid])
		low=mid+1;
		else
		high=mid-1;
	}
	if(low>high)//理解此处 
	printf("未找到\n");
	else
	printf("查找数据的下标为：%d",mid);
	return 0;
 } 
