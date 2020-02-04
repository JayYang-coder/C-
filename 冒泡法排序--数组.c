#include<stdio.h>
int main()
{
	int a[6],i,j,t;
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	for(j=0;j<5-i;j++)
	if(a[j]<a[j+1]){
		t=a[j];      //交换过程，将大的数逐渐往上提 
		a[j]=a[j+1];
		a[j+1]=t;
	}
	for(i=0;i<6;i++)
	printf("%3d",a[i]);
}
