/*#include<stdio.h>
int main()
{
	int n,i=0,t=0;
	char x;
	printf("\n\t请输入正方形的边长(2<n<60):");
	scanf("%d",&n);
	while(n>i){
	printf("* ");
	i++;
	}
	i=0;
	while(n-2>t){
	printf("\n");
	printf("*");
	t++;
	while(n-2>i){
		printf(" +");
		i++;
	}
	printf(" ",x);
	i=0;
	printf("*");
    } 
    printf("\n");
	i=0;
	while(n>i){
	printf("* ");
	i++;
	}
	return 0;	
 } 
 */
 #include<stdio.h>
 int main() 
 {
 	int n,i,j;
 	char x,y;
 	printf("请输入边框符号：");
 	scanf("%c",&x);
 	getchar();
 	printf("请输入填充符号：(可以为空格)");
 	scanf("%c",&y);
 	getchar();
 	printf("请输入边长：");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	printf("%c ",x);
 	for(j=0;j<=n-3;j++)
	{
	printf("\n%c",x);
 	for(i=0;i<2*n-3;i++)
 	printf("%c",y);
 	printf("%c",x);
 	}
 	printf("\n");
 	for(i=0;i<n;i++)
 	printf("%c ",x);
 		
	 }
