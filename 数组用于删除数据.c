#define N 20
#include<stdio.h>
int main()
{
	int score[N],x,i,n,k;
	printf("����������ѧ������");
	scanf("%d",&n);
	printf("����������ѧ���ɼ����ݣ�");
	for(i=0;i<n;i++)
	scanf("%d",&score[i]);
	printf("������Ҫɾ�������ݣ�");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	if(x==score[i])break;
	k=i;//��¼��ɾ����λ��
	for(i=k;i<n;i++)
	score[i]=score[i+1];//����ʽɾ��
	n--;
	printf("ɾ����������ǣ�\n");
	for(i=0;i<n;i++)
	printf("%4d",score[i]);
	return 0;
}

