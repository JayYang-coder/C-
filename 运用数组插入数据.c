#define N 20
#include<stdio.h>
int main()
{
	int score[N],x,i,n,k;
	printf("���������е�ѧ��������");
	scanf("%d",&n);
	printf("�������������ѧ���ĳɼ���");
	for(i=0;i<n;i++)
	scanf("%d",&score[i]);
	printf("������Ҫ����ĳɼ����ݣ�");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	if(x<score[i])break;
	k=i; //��¼����λ��
	for(i=n-1;i>=k;i--)//�����һλ���ݿ�ʼ��������� 
	score[i+1]=score[i];
	score[k]=x;
	n++;
	printf("������ѧ���ɼ�Ϊ��");
	for(i=0;i<n;i++)
	printf("%4d",score[i]);
	return 0;
}
