#include<stdio.h>
int main()
{
	int a[6]={0},i,j,k,x;
	for(i=0;i<6;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		k=i;
		for(j=i+1;j<6;j++)
		 if(a[j]<a[k]) k=j;//k指向小的数 
		if(i!=k)
		{ x=a[i];a[i]=a[k];a[k]=x;}	 
	}
	for(i=0;i<6;i++)
	 printf("%2d",a[i]);
 } 
