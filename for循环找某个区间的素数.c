#include<stdio.h>
int main()
{
	int i,k=0,t,j,n,m;
	printf("请输入你想要找素数的区间:");//不知道怎么让2进去 
	scanf("%d%d",&n,&m);
	t=n;//使下面的i<m-t+i区间长度不变 
	printf("\n");
	printf("这个区间里的素数是:\n");
	for(i=1;i<m-t+1;i++){//循环n~m的每一个数 
	for(j=2;j<m;j++){//循环2~所查的数 
	 //   if(n==2);printf("%-6d",n);
		if(n%j==0)break;
		if(j==n-1){
		printf("%-6d",n);
		k++;
		}
	    }	
        if(k==8){printf("\n");k=0;}//换行骚操作 
	     n++;
	}
	printf("\n");
	return 0;
}
