#include<stdio.h>
 int main()
 {
 	int age;
 	char gender,ms;
 	printf("\n\n\t˾������ϸ��Ϣ\n\n");
 	printf("\n\t˾���Ļ���״����Y/N����");
 	scanf("%c",&ms);
 	getchar();//û�д˴����������������� 
 	printf("\n\t˾�����Ա�M/F��:");
	scanf("%c",&gender);
	getchar(); //����getchar()���س���ȡ�ߣ��Ա����������� ������ 
	printf("\n\t˾�������䣺");
	scanf("%d",&age);
	if(ms=='Y')
	printf("\n\t��˾������Ͷ��");
	else if(gender=='M'&&age>30)
	printf("\n\t��˾������Ͷ��");
	else if(gender=='F'&&age>25)
	printf("\n\t��˾������Ͷ��");
	else
	printf("\n\t��˾��������Ͷ��");
	return 0;
} 
