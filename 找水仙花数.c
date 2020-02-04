#include<stdio.h>
int main()
{
	int count=100,a,b,c;
	printf("\t水仙花数为:");
	while(count<=999){
		a=count%10;
		b=count/10%10;
		c=count/100;
		if(count==c*c*c+b*b*b+a*a*a)
		 printf("\t%d",count);
		count++;
	}
	return 0;
 } 
