#include<stdio.h>
int main()
{
	const int number=10;//数组的大小 
	int count[number];//定义数组
	int x,i;
	for(i=0;i<number;i++){  //初始化数组
	count[i]=0; 
 } 
    printf("plese input the number of 0--9 :\n"); 
    scanf("%d",&x);
    while(x!=-1){
    	if(x>=0&&x<=9){
    	count[x]++; //数组参与运算 
    }
	scanf("%d",&x);
}
    for(i=0;i<number;i++){  //遍历数组输出 
    	printf("%d have show up for %d times\n",i,count[i]);
    	//return 0; (不能放在循环出，否则出错！！！)
	}
	return 0;
}
