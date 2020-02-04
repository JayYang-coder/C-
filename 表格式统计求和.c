#include<stdio.h>
int main()
{
	float a[100][5],sum;
	int i,n,j;
	float ave;
	printf("请输入要统计的学生数目(<100)：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("请依次输入同学%d的数学、英语、程序设计成绩：",i+1);
		for(j=0,sum=0;j<3;j++)
		{
			scanf("%f",&a[i][j]);
			sum=sum+a[i][j];
		}
		a[i][3]=sum;
		ave=sum/3.;
		a[i][4]=ave;
	}
		printf("\n");
	printf("英语      数学     程序设计   总分      均分\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		printf("%-10.1f",a[i][j]);
		printf("\n");
	 } 
	 return 0;
}
