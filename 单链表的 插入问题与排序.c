#include<stdio.h>
#include<stdlib.h>
struct student *creat_list();
struct student *insert_Node(struct student *head, int x, float y);
struct student {
	int num;
	float score;
	struct student *next;
};
int main() {
	struct student *p;
	p=creat_list();
	do {
		printf("%03d  %5.1f\n", p->num, p->score);
		p = p->next;
	} while (p != NULL);
	return 0;
}
struct student *insert_Node(struct student *head, int x, float y) {
	struct student *p, *q, *s;
	p = head;
	q = NULL;
	s = (struct student*)malloc(sizeof(struct student));
	s->num = x;
	s->score = y;
	if (head == NULL) {
		head = s;
		s->next = NULL;
	} else {
		while ((p != NULL) && (p->num < s->num)) {
			q = p;
			p = p->next;
		}
		if(p==head) {
			s->next = p;
			head = s;
		} else {
			s->next = p;
			q->next = s;
		}
		return head;
	}
}
struct student *creat_list() {
	struct student *head;
	int x;
	float y;
	head = NULL;
	scanf("%d%f", &x, &y);
	while (x != -999) {
		head = insert_Node(head, x, y);
		scanf("%d%f", &x, &y);
	}
	return head;
}
