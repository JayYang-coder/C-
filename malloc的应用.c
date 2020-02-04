#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int num;
	char name[20];
	char course_name[20];
	float credit;
	int grade;
	float GPA;
}student;
int main()
{
	int n,i;
	student *s;
	printf("请输入人数：");
	scanf("%d",&n);//动态申请大小为n的数组空间，s指向数组的首地址，s即数组名
	s=(student*)malloc(n*sizeof(student));
	for(i=0;i<n;i++)
	{
		printf("请输入%d位成绩：\n",i+1);
		scanf("%d%s%s%f%d%f",&s[i].num,s[i].name,s[i].course_name,
		&s[i].credit ,&s[i].grade,&s[i].GPA);
	 } 
	 printf("输出成绩：\n");
	 for(i=0;i<n;i++)
		printf("%6d%10s%10s%4.1f%5d%5.1f",s[i].num,s[i].name,s[i].course_name,
		s[i].credit ,s[i].grade,s[i].GPA);
	 free(s);         //释放空间，特别重要
	 return 0; 
 } 
