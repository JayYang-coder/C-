#include<stdio.h>
void swap(int*a,int*b)
{
	int t; 
	t=*a;*a=*b;*b=t;
}

int main()
{
	int x,y;
	printf("Plese input two different numbers:");
	scanf("%d%d",&x,&y);
	printf("����ǰ��x=%d,y=%d\n",x,y);
	swap(&x,&y);
	printf("������: x=%d,y=%d",x,y);
	return 0;
 } 
 
 
