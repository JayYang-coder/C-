#include<stdio.h>
int main()
{
	int x,cnt=0;
	int number[100];//定义数组 
	double sum=0;
	printf("请输入数据：（以最后输入-1结束输入！）\n"); 
	scanf("%d",&x);
	while(x!=-1){
		number[cnt]=x;//将数据存入cnt（下标）对应的数中 
		{
			int i;
			printf("%d\t",cnt);//测试数据的数数方式：从0开始计数 
			for(i=0;i<=cnt;i++){
				printf("%d\t",number[i]);
			}
			printf("\n");
		}
		sum+=x,cnt++;//求和 
		scanf("%d",&x);
	}
	if(cnt>0){
		printf("%f\n",sum/cnt);
		int i;
		for(i=0;i<cnt;i++){    //遍历输出大于平均数的数据 
			if(number[i]>sum/cnt){
				printf("bigger than average is:%d\n",number[i]);
			}
		}
	}
	return 0;
 } 
