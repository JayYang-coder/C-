/*9�����У���3��4��2����ȡ6��������ж����ַ�����ѭ����Ƕ��*/
#include<stdio.h>
int main()
{
	int i,j,count;
	printf("\t ���� ���� ����\n");
	printf("-----------------------\n");
	for(i=0;i<=3;i++)
	for(j=0;j<=4;j++)
	if((6-i-j)<=2&&(6-i-j)>=0)
	{
		count++;
		printf("����%d:%5d%5d%5d\n",count,i,j,6-i-j);
	 } 
 } 
