#include<stdio.h>
 int main()
{
	int x;
	printf("请输入一个任意数："); 
	scanf("%d",&x);
	int n=0;
	do/*先进入循环体，再判断条件，条件满足，继续循环，否则退出*/ 
	{
		x/=10;n++;
	 }while(x>0);
	 printf("这是一个%d位数！",n); 
 return 0;
}
