#include<stdio.h>
int main()
{
	char a[5]={'A','B','C','D','E'};
	int i,j,m;
	for(i=0;i<5;i++)
   {
	for(j=0;j<5;j++)
	{
		m=(i+j)%5;
		printf("%c ",a[m]);
	}
	printf("\n");
    }
    return 0;
}
