#include<stdio.h>
enum color{red,yellow,blue,white,black
}; 
void print_color(enum color pri)
{
	switch(pri)
	{
		case red:printf("%-10s","red");break;
		case yellow:printf("%-10s","yellow");break;
		case blue:printf("%-10s","blue");break;
		case white:printf("%-10s","white");break;
		case black:printf("%-10s","black");break;
	}
}

int main()
{
	enum color i,j,k;
	int n=0;
	for(i=red;i<=black;i++)
	for(j=red;j<=black;j++)
	if(i!=j)
	{
		for(k=red;k<=black;k++)
		if((k!=i)&&(k!=j))
		{
			n++;
			printf("%-4d",n);
			print_color(i);
			print_color(j);
			print_color(k);
			printf("\n");
		}
	}
		printf("\ntotal:%5d\n",n);
		return 0;
}
