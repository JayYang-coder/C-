#include<stdio.h>
struct point {
	int x;
	int y;
};

struct point* getstruct(struct point*);
void output(struct point);
void print(const struct point*p);
int main() {
	struct point y= {0,0
	};
	getstruct(&y);
	output(y);
	output(*getstruct(&y));
	*getstruct(&y)=(struct point) {//注意理解此处 
		1,2
	};
	return 0;
}
struct point*getstruct(struct point *p) {
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("%d,%d",p->x,p->y);
	return p;
}
void output(struct point p) {
	printf("%d,%d",p.x ,p.y);
}
void print(const struct point *p)
{
	printf("%d,%d",p->x,p->y);
 } 
