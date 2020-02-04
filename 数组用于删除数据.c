#define N 20
#include<stdio.h>
int main()
{
	int score[N],x,i,n,k;
	printf("请输入现有学生数：");
	scanf("%d",&n);
	printf("请输入现有学生成绩数据：");
	for(i=0;i<n;i++)
	scanf("%d",&score[i]);
	printf("请输入要删除的数据：");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	if(x==score[i])break;
	k=i;//记录下删除的位置
	for(i=k;i<n;i++)
	score[i]=score[i+1];//覆盖式删除
	n--;
	printf("删除后的数据是：\n");
	for(i=0;i<n;i++)
	printf("%4d",score[i]);
	return 0;
}

