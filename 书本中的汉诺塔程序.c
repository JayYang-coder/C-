#include<stdio.h>
void move(int k,char x,char z)
{
	printf("%3d:   %c----->%c\n",k,x,z);
 } 
 
 void Hanio(int n,char x,char y,char z) //�ݹ麯�� 
 {
 	if(n==1) move(1,x,z);               //���һ������ 
 	else
 	{
 		Hanio(n-1,x,z,y);               //��1��n-1�����ӵݹ���ô�X���ƶ���Y���� 
 		move(n,x,z);                    //���������Ӵ�X���ƶ���Z�� 
 		Hanio(n-1,y,x,z);               //��1��n-1�����ӵݹ���ô�X���ƶ���Z����
	 }
 }

int main()
{
	int m;
	printf("please input the number of diskes:");
	scanf("%d",&m);
	Hanio(m,'A','B','C');
	return 0;
}
