#include<stdio.h>
#include<math.h>
int main()
{
	float a,x0,x1;
	printf("请输入一个数：");
	scanf("%f",&a);
	x0=a/2;
	x1=(x0+a/x0)/2;
	do{
		x0=x1;
		x1=(x0+a/x0)/2;
	}while(fabs(x0-x1)>=1e-5);
	printf("其平方根为：%f\n",x1);
	return 0; 
 } 
