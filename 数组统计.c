#include<stdio.h>
int main()
{
	float sum=0,number[100];
	int i;
	float n;
	for(i=0;i<100;i++)
	number[i]=0;
	i=0;
	printf("请输入少于100个且不为0的数据：");
	while(n!=0){
		scanf("%f",&n);
		number[i]=n;
		sum+=n;
		i++;
	} 
	  float average;
	  int x=0,y=0;
	  average=sum/(i-1);
	  printf("average is %.2f",average);
	  for(i=0;i<100;i++){
	  	if(number[i]>0)
	  	x++;
	  	else if(number[i]<0)
	  	y++;
	  }printf("正数有%d个，负数有%d个！\n",x,y);
	  printf("大于平均数的有：\n");
	  for(i=0;i<100;i++){
	  	if(number[i]>average)
	  	printf("%.2f ",number[i]);
	  }
	  
 } 
