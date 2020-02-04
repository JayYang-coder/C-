#include<stdio.h>
struct point {
	int x;
	int y;
}; 

struct point getstruct();
void output(struct point );

int main()
{
	struct point y={0,0
	};
	y=getstruct();
	printf("\n");
	output(y);
	return 0;
}
struct point getstruct()
{
	struct point p;
	scanf("%d",&p.x);
	scanf("%d",&p.y);
	printf("%d,%d",p.x,p.y);
	return p;       //此处与前面返回变量比较 
}
void output(struct point p)
{
	printf("%d,%d",p.x,p.y);
}
