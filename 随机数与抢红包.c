#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a,b,c,d,e;
	char gamer;
	printf("**************************************\n");
	printf("����һ���������Ϸ����������Ҫ���ĺ����\n");
	printf("**************************************\n");
	printf("\t**A�����A**\n\t**B�����B**\n\t**C�����C**\n\t**D�����D**\n\t**E�����E**\n");
	printf("\t");
	scanf("%c",&gamer);
	srand((unsigned)time(NULL));
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	d=rand()%100;
	e=rand()%100;
	printf("\t���A:%dԪ\n",a);
	printf("\t���B:%dԪ\n",b);
	printf("\t���C:%dԪ\n",c);
	printf("\t���D:%dԪ\n",d);
	printf("\t���E:%dԪ\n",e);
	printf("\n\t�����˺��%c\n",gamer);
	return 0;
 } 
