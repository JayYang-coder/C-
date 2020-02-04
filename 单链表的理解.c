#include<stdio.h>//¼òµ¥µÄ¾²Ì¬Á´±í 
struct student {
	int num;
	float score;
	struct student *next;
};
int main() {
	struct student a,b,c,*head,*p;
	a.num=1001;
	a.score=95.5;
	b.num=1002;
	b.score=88.7;
	c.num=1003;
	c.score=90.8;
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=head;

	do {
		printf("%d  %5.1f\n",p->num,p->score);
		p=p->next;
	} while(p!=NULL);
	return 0;
}
