#include<stdio.h>
int main()
{
	int x,cnt=0;
	int number[100];//�������� 
	double sum=0;
	printf("���������ݣ������������-1�������룡��\n"); 
	scanf("%d",&x);
	while(x!=-1){
		number[cnt]=x;//�����ݴ���cnt���±꣩��Ӧ������ 
		{
			int i;
			printf("%d\t",cnt);//�������ݵ�������ʽ����0��ʼ���� 
			for(i=0;i<=cnt;i++){
				printf("%d\t",number[i]);
			}
			printf("\n");
		}
		sum+=x,cnt++;//��� 
		scanf("%d",&x);
	}
	if(cnt>0){
		printf("%f\n",sum/cnt);
		int i;
		for(i=0;i<cnt;i++){    //�����������ƽ���������� 
			if(number[i]>sum/cnt){
				printf("bigger than average is:%d\n",number[i]);
			}
		}
	}
	return 0;
 } 
