#include<stdio.h>//倒取余数法 
int main()
{
	int i=0,r,n,a[32];
	char b[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};    
	printf("请输入你要转换的数：");
	scanf("%d",&n);
	printf("\n请输入转换数制：");
	scanf("%d",&r);
	do{
		a[i]=n%r;
		n=n/r;
		i++;
	}while(n!=0);
	for(--i;i>=0;--i)
	{
		n=a[i];
		printf("%c",b[n]);
	}
	return 0;
 } 
