#include<stdio.h>
void sca(int *p,int n)
{
	int i;
	for(i=0;i<10;i++,p++)
	scanf("%d",p);
 } 
 void prt(int *p,int n)
 {
 	int i;
 	for(i=0;i<n;i++,p++)
 	printf("%d ",*p);
 	printf("\n");
 }
 void sort(int a[],int n)
 {
 	int i,j,t;
 	for(i=0;i<n-1;i++)
 	for(j=0;j<n-i-1;j++)
 	if(a[j]<a[j+1])
 	{
 		t=a[j];
 		a[j]=a[j+1];
 		a[j+1]=t;
	 }
 }
 int main()
 {
 	int a[10];
 	sca(a,10);
 	sort(a,10);
 	prt(a,3);
 	return 0;
 }
