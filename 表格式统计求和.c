#include<stdio.h>
int main()
{
	float a[100][5],sum;
	int i,n,j;
	float ave;
	printf("������Ҫͳ�Ƶ�ѧ����Ŀ(<100)��");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("����������ͬѧ%d����ѧ��Ӣ�������Ƴɼ���",i+1);
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
	printf("Ӣ��      ��ѧ     �������   �ܷ�      ����\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		printf("%-10.1f",a[i][j]);
		printf("\n");
	 } 
	 return 0;
}
