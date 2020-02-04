#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a,b,c,d,e;
	char gamer;
	printf("**************************************\n");
	printf("这是一个抢红包游戏，请输入你要抢的红包：\n");
	printf("**************************************\n");
	printf("\t**A：红包A**\n\t**B：红包B**\n\t**C：红包C**\n\t**D：红包D**\n\t**E：红包E**\n");
	printf("\t");
	scanf("%c",&gamer);
	srand((unsigned)time(NULL));
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	d=rand()%100;
	e=rand()%100;
	printf("\t红包A:%d元\n",a);
	printf("\t红包B:%d元\n",b);
	printf("\t红包C:%d元\n",c);
	printf("\t红包D:%d元\n",d);
	printf("\t红包E:%d元\n",e);
	printf("\n\t你抢了红包%c\n",gamer);
	return 0;
 } 
