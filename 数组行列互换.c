#include<stdio.h>
int main()
{
	int a[2][3],b[3][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		    b[j][i]=a[i][j];//�������� 
		}
	}
	printf("����aΪ��\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("\n");
	printf("����bΪ��\n");
	for(i=0;i<3;i++)
	{   
		for(j=0;j<2;j++)
		printf("%5d",b[i][j]);
		printf("\n");
	}
	return 0;
	
}
