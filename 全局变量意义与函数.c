#include<stdio.h>         //ȫ�ֱ���ʵ���˴Ӻ����д�ֵ��� 
#include<stdlib.h>
#define N 10
float average(int arr[],int);    //���������� 
int max,min;                     //����ȫ�ֱ��� 
int main()
{
	int i;
	int array[N];
	float ave;
	printf("������%d��Ա����������:\n",N);
	for(i=0;i<N;i++)
	scanf("%d",&array[i]);
	printf("\n");
	ave=average(array,N);                         //���ú��� 
	printf("average_age is :%.1f\n",ave);         //ʹ�þֲ�����ave 
	printf("max_age is :%d\n",max);                 //ʹ��ȫ�ֱ���max 
	printf("min_age is :%d\n",min);                 //ʹ��ȫ�ֱ���min 
	return 0;
}

float average(int arr[],int n)                  //������� 
{
	int j;
	float sum=0;
	max=arr[0];
	min=arr[0];
	for(j=0;j<N;j++)
	{
		sum+=arr[j];
		if(max<arr[j])
		max=arr[j];
		else if(min>arr[j])
		min=arr[j];
	}
	return sum/n;
}




 
