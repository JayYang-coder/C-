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
	printf("������������");
	scanf("%d",&n);//��̬�����СΪn������ռ䣬sָ��������׵�ַ��s��������
	s=(student*)malloc(n*sizeof(student));
	for(i=0;i<n;i++)
	{
		printf("������%dλ�ɼ���\n",i+1);
		scanf("%d%s%s%f%d%f",&s[i].num,s[i].name,s[i].course_name,
		&s[i].credit ,&s[i].grade,&s[i].GPA);
	 } 
	 printf("����ɼ���\n");
	 for(i=0;i<n;i++)
		printf("%6d%10s%10s%4.1f%5d%5.1f",s[i].num,s[i].name,s[i].course_name,
		s[i].credit ,s[i].grade,s[i].GPA);
	 free(s);         //�ͷſռ䣬�ر���Ҫ
	 return 0; 
 } 
