#include<stdio.h>
#include<time.h>
#include<math.h>
void goldbach( int a,int b);//���� 
int main()
{
	int m,n;
	printf("������Ҫ���ҵ����䣺");
	scanf("%d%d",&n,&m);
	goldbach(n,m);
	return 0; 
 } 
 
 int prime(int n)         //�ж��Ƿ�����������
 {
 	int i,m=sqrt(n);
 	int ret=1;
 	for(i=2;i<=m;i++)
 	if(n%i==0) ret=0;
 	return ret;
  } 

void goldbach(int a,int b)//Ѱ��ż����������֮�� 
{
	int i,k;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
		k=3;
		while(k<i/2)      //ע��˴�������
		{
			if(prime(k)&&prime(i-k))break;
			k++; 
		 } 
		if(k<=i/2)printf("%d=%d+%d\n",i,k,i-k);
	    } 
	} 
}

 
