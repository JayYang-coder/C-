#include<stdio.h>
#include<time.h>
int main()
{
	int number;
	srand((unsigned)time(NULL));//��������� 
	number=rand()%100+1;
	int count,a=0;
	printf("���Ѿ������һ��һ��100������\n");
	do{
		printf("�°ɣ�\n");
		scanf("%d",&a);
		count++;
		if(a>number)
{       printf("��µ������ˣ�"); 
}       else if(a!=number)
{       printf("��µ���С�ˣ�");  
}
		} while(a!=number);
		printf("̫���ˣ�������%d�ξͲµ��˴𰸣�����\n",count);
		return 0;
	} 
  
