#include<stdio.h>
#include<time.h>
#include<math.h>
void goldbach( int a,int b);//声明 
int main()
{
	int m,n;
	printf("请输入要查找的区间：");
	scanf("%d%d",&n,&m);
	goldbach(n,m);
	return 0; 
 } 
 
 int prime(int n)         //判断是否是素数函数
 {
 	int i,m=sqrt(n);
 	int ret=1;
 	for(i=2;i<=m;i++)
 	if(n%i==0) ret=0;
 	return ret;
  } 

void goldbach(int a,int b)//寻找偶数是两素数之和 
{
	int i,k;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
		k=3;
		while(k<i/2)      //注意此处的巧妙
		{
			if(prime(k)&&prime(i-k))break;
			k++; 
		 } 
		if(k<=i/2)printf("%d=%d+%d\n",i,k,i-k);
	    } 
	} 
}

 
