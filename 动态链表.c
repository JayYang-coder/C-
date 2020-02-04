#include<stdio.h>
#include<stdlib.h> 
#define LEN sizeof(struct student)
struct student{
	int num;
	float score;
	struct student *next;
}; 
struct student *creat()        //函数返回单链表的头指针 ，返回指针，要加* 
{
	struct student *head=NULL,*p1,*rear=NULL;
	p1=(struct student*)malloc(LEN);
	scanf("%d%f",&p1->num,&p1->score);
	while(p1->num!=-999)
	{
		if(head==NULL) head=p1;
		else rear->next =p1;//链接尾结点（rear）和当前结点（p1） 
		rear=p1;            //使rear指向新的尾结点 
		p1=(struct student*)malloc(LEN);
		scanf("%d%f",&p1->num,&p1->score);
	}
	rear->next=NULL;         //使单链表的尾结点的next为NULL 
	return head;             //返回单链表的头指针 
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
