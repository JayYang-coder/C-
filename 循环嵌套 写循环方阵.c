#include<stdio.h>
int main()
{
	int i,j,k,t,m,h;
	printf("�����뷽��m��");
	scanf("%d",&m);
	printf("�����������£�\n"); 
	for(i=0;i<=m;i++)
	{
		for(j=0;j<m;j++)
		{
		t=(i+j)%m;//ȷ�������i�еĵ�һ������ 
		for(k=0;k<m;k++)//���ջ�����ʽ��������еĸ���Ԫ�� 
		{
		h=(k+t)%m+1;
		printf("%2d",h);
	    }
		printf("\n");	
		}
		printf("\n");
	}
 
 } 
