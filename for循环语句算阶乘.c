#include<stdio.h>
 int main()
{
  int n;
  printf("请输入一个不太大的数：");
  scanf("%d",&n);
  int fact=1,i=1;  
  for (i=1;i<=n;i++) 
  fact*=i;
  printf("这个数的阶乘是%d",fact);
 return 0;
}
