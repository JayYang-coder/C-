#include<stdio.h>
#define maxNumber 25
int main()
{
	int isprime[maxNumber];
	int i,x;
	for(i=0;i<maxNumber;i++)
	isprime[i]=1;
	for(x=2;x<maxNumber;x++)
	{
		if(isprime[x])
		{
			for(i=2;i*x<maxNumber;i++)
			isprime[i*x]=0;//�����ı����������� ��������һ��ȥ 
		}
	}
	for(i=2;i<maxNumber;i++)
	if(isprime[i])
	printf("%d\t",i);
	printf("\n");
	return 0;
}
 
