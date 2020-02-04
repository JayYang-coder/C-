#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0) return a;
	printf("a=%d,a/b=%d\n",a,a%b);
	return gcd(b,a%b);
	
}

int main()
{
	int ans=gcd(12,32);
	printf("%d",ans);
	return 0;
}
