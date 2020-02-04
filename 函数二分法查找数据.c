#include<stdio.h>
#define N 10
int Binsearch(int a[],int i,int j,int x)
{
	int low=i,high=j,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x==a[mid])
		return mid;
		else if(x>a[mid])
		low=mid+1;
		else
		high=mid+1;
	}
	return -1;
 } 
 int main()
 {
 	int i,score[N],x,y;
 	printf("递增输入%2d个学生的成绩数据：\n",N);
 	for(i=0;i<N;i++)
 	    scanf("%d",&score[i]);
 	printf("输入要查找的学生成绩数据：\n");
 	scanf("%d",&x);
 	y=Binsearch(score,0,N-1,x); 
 	if(y==-1)
 	printf("%d成绩没有找到\n",x);
 	else
 	printf("%d成绩找到，下标为%d的位置上\n",x,y);
 	return 0;
 }
