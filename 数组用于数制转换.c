#include<stdio.h>//��ȡ������ 
int main()
{
	int i=0,r,n,a[32];
	char b[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};    
	printf("��������Ҫת��������");
	scanf("%d",&n);
	printf("\n������ת�����ƣ�");
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
