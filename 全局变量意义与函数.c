#include<stdio.h>         //全局变量实现了从函数中传值多个 
#include<stdlib.h>
#define N 10
float average(int arr[],int);    //函数的声明 
int max,min;                     //定义全局变量 
int main()
{
	int i;
	int array[N];
	float ave;
	printf("请输入%d个员工年龄数据:\n",N);
	for(i=0;i<N;i++)
	scanf("%d",&array[i]);
	printf("\n");
	ave=average(array,N);                         //调用函数 
	printf("average_age is :%.1f\n",ave);         //使用局部变量ave 
	printf("max_age is :%d\n",max);                 //使用全局变量max 
	printf("min_age is :%d\n",min);                 //使用全局变两min 
	return 0;
}

float average(int arr[],int n)                  //函数语句 
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




 
