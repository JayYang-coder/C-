#include<stdio.h>
 int main()
{
  int n;
  printf("������һ����̫�������");
  scanf("%d",&n);
  int fact=1,i=1;  
  for (i=1;i<=n;i++) 
  fact*=i;
  printf("������Ľ׳���%d",fact);
 return 0;
}
