#include<stdio.h>
#include<stdlib.h> 
#define LEN sizeof(struct student)
struct student{
	int num;
	float score;
	struct student *next;
}; 
struct student *creat()        //�������ص������ͷָ�� ������ָ�룬Ҫ��* 
{
	struct student *head=NULL,*p1,*rear=NULL;
	p1=(struct student*)malloc(LEN);
	scanf("%d%f",&p1->num,&p1->score);
	while(p1->num!=-999)
	{
		if(head==NULL) head=p1;
		else rear->next =p1;//����β��㣨rear���͵�ǰ��㣨p1�� 
		rear=p1;            //ʹrearָ���µ�β��� 
		p1=(struct student*)malloc(LEN);
		scanf("%d%f",&p1->num,&p1->score);
	}
	rear->next=NULL;         //ʹ�������β����nextΪNULL 
	return head;             //���ص������ͷָ�� 
}
int main()
{
struct student *p;
	p=creat();
	do{
	printf("%03d  %5.1f\n",p->num,p->score);
	p=p->next;
	}while(p!=NULL);
	return 0;
}
