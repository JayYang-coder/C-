#include<stdio.h>
int main()
{
	int n,i,x;
	printf("������һ����Ϊ0����");
	scanf("%d",&n);
	printf("%d=1",n);
	for(i=2,x=0;i<=n;)
	{
		if(n%i==0)
		{
		printf("*%d",i);
		n/=i;
		}
		else
		i++;
	}
	 return 0;
 } 
