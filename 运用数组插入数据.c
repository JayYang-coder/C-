#define N 20
#include<stdio.h>
int main()
{
	int score[N],x,i,n,k;
	printf("请输入现有的学生人数：");
	scanf("%d",&n);
	printf("请递增输入现有学生的成绩：");
	for(i=0;i<n;i++)
	scanf("%d",&score[i]);
	printf("请输入要插入的成绩数据：");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	if(x<score[i])break;
	k=i; //记录插入位置
	for(i=n-1;i>=k;i--)//从最后一位数据开始依次向后移 
	score[i+1]=score[i];
	score[k]=x;
	n++;
	printf("插入后的学生成绩为：");
	for(i=0;i<n;i++)
	printf("%4d",score[i]);
	return 0;
}
