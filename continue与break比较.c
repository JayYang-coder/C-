#include<stdio.h>
#define M 10
int main(){
	float sum1,sum2,num;
	int i;
	printf("������ʵ����");
	for(sum1=sum2=0.0,i=0;i<M;i++){
		scanf("%f",&num);
		if(num==0)break;//��������ѭ�� 
		sum1+=num;
		if(num<0)continue;//��ֹ����ѭ�����ٴ��ж����� 
		sum2+=num;	
	}
	   printf("�ܺ�=%f\n",sum1);
	   printf("�����ܺ�=%f\n",sum2);
	   return 0;
}
 
