#include<stdio.h>
#include<time.h>
int main()
{
	int number;
	srand((unsigned)time(NULL));//随机数种子 
	number=rand()%100+1;
	int count,a=0;
	printf("我已经想好了一个一到100的数。\n");
	do{
		printf("猜吧：\n");
		scanf("%d",&a);
		count++;
		if(a>number)
{       printf("你猜的数大了！"); 
}       else if(a!=number)
{       printf("你猜的数小了！");  
}
		} while(a!=number);
		printf("太好了，你用了%d次就猜到了答案！！！\n",count);
		return 0;
	} 
  
