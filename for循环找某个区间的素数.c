#include<stdio.h>
int main()
{
	int i,k=0,t,j,n,m;
	printf("����������Ҫ������������:");//��֪����ô��2��ȥ 
	scanf("%d%d",&n,&m);
	t=n;//ʹ�����i<m-t+i���䳤�Ȳ��� 
	printf("\n");
	printf("����������������:\n");
	for(i=1;i<m-t+1;i++){//ѭ��n~m��ÿһ���� 
	for(j=2;j<m;j++){//ѭ��2~������� 
	 //   if(n==2);printf("%-6d",n);
		if(n%j==0)break;
		if(j==n-1){
		printf("%-6d",n);
		k++;
		}
	    }	
        if(k==8){printf("\n");k=0;}//����ɧ���� 
	     n++;
	}
	printf("\n");
	return 0;
}
