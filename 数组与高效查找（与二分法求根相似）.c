#include<stdio.h>
#define N 20
int main()
{
	int i,low,high,mid,score[N],x;
	low=0,high=N-1;
	printf("��������ѧ���ĳɼ����ݣ�\n");
	for(i=0;i<N;i++)
	scanf("%d",&score[i]);
	printf("������Ҫ���ҵĳɼ����ݣ�\n");
	scanf("%d",&x);
	while(low<high)
	{
		mid=(low+high)/2;
		if(x==score[mid])break;
		else if(x>score[mid])
		low=mid+1;
		else
		high=mid-1;
	}
	if(low>high)//���˴� 
	printf("δ�ҵ�\n");
	else
	printf("�������ݵ��±�Ϊ��%d",mid);
	return 0;
 } 
