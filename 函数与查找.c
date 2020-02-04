#include<stdio.h>
int search(int key,int a[],int len)
{
	int ret=-1;int i; 
	for( i=0;i<len;i++)
	{
		if(key==a[i])
		{
		ret=i;
		break;
		}
	}
	return ret;
 } 
 int main()
 {
 	int a[]={1,56,58,2,46,51,31,35,15,33,55,48,29,52};
 	int x;
 	scanf("%d",&x);
 	int r=search(x,a,sizeof(a)/sizeof(a[0]));
 	printf("ret=%d\n",r);
 	return 0;
 }
