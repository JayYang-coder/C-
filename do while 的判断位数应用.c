#include<stdio.h>
 int main()
{
	int x;
	printf("������һ����������"); 
	scanf("%d",&x);
	int n=0;
	do/*�Ƚ���ѭ���壬���ж��������������㣬����ѭ���������˳�*/ 
	{
		x/=10;n++;
	 }while(x>0);
	 printf("����һ��%dλ����",n); 
 return 0;
}
