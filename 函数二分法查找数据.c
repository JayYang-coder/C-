#include<stdio.h>
#define N 10
int Binsearch(int a[],int i,int j,int x)
{
	int low=i,high=j,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x==a[mid])
		return mid;
		else if(x>a[mid])
		low=mid+1;
		else
		high=mid+1;
	}
	return -1;
 } 
 int main()
 {
 	int i,score[N],x,y;
 	printf("��������%2d��ѧ���ĳɼ����ݣ�\n",N);
 	for(i=0;i<N;i++)
 	    scanf("%d",&score[i]);
 	printf("����Ҫ���ҵ�ѧ���ɼ����ݣ�\n");
 	scanf("%d",&x);
 	y=Binsearch(score,0,N-1,x); 
 	if(y==-1)
 	printf("%d�ɼ�û���ҵ�\n",x);
 	else
 	printf("%d�ɼ��ҵ����±�Ϊ%d��λ����\n",x,y);
 	return 0;
 }
