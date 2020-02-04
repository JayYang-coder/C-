#include<stdio.h>
#define M 10
int main(){
	float sum1,sum2,num;
	int i;
	printf("请输入实数：");
	for(sum1=sum2=0.0,i=0;i<M;i++){
		scanf("%f",&num);
		if(num==0)break;//结束本层循环 
		sum1+=num;
		if(num<0)continue;//终止本次循环，再次判断条件 
		sum2+=num;	
	}
	   printf("总和=%f\n",sum1);
	   printf("正数总和=%f\n",sum2);
	   return 0;
}
 
