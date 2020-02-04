#include<stdio.h>
int fac(int n)
{
	int p;
	if(n==1||n==0) p=1;
	else
	p=n*fac(n-1);
	return p;
}

int main()
{
	int n;
	printf("please iput a integer:");
	scanf("%d",&n);
	printf("%2d!=%d\n",n,fac(n));
	return 0; 
}


