#include<stdio.h>
void move(int k,char x,char z)
{
	printf("%3d:   %c----->%c\n",k,x,z);
 } 
 
 void Hanio(int n,char x,char y,char z) //递归函数 
 {
 	if(n==1) move(1,x,z);               //输出一号盘子 
 	else
 	{
 		Hanio(n-1,x,z,y);               //将1到n-1号盘子递归调用从X柱移动到Y柱上 
 		move(n,x,z);                    //输出最大盘子从X柱移动到Z柱 
 		Hanio(n-1,y,x,z);               //将1到n-1号盘子递归调用从X柱移动到Z柱上
	 }
 }

int main()
{
	int m;
	printf("please input the number of diskes:");
	scanf("%d",&m);
	Hanio(m,'A','B','C');
	return 0;
}
