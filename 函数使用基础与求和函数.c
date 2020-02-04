#include<stdio.h>
void sum(int begin,int end)
{
	int i;int sum=0;
	for(i=begin;i<=end;i++)
	{
		sum+=i; 
	 } 
	 printf("%d到%d的和是%d",begin,end,sum);
}
int main()
{
	sum(1,10); 
	printf("\n");
	sum(20,30); 
	return 0;
}
 
