#include<stdio.h>
#include<stdlib.h> 
int main()
{
	int m,n,r,t,x;
	printf("���������������ÿո������");
	scanf("%d%d",&m,&n);
	t=n;x=m; 
/*	r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;}*/
		do{
			r=m%n;
			if(r==0)break;
			m=n;
			n=r;
			r=m%n;
		}while(1);
	printf("%d��%d�����������%d,��С��������%d",t,x,n,x*t/n);
	return 0;
}
