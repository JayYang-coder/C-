#include<stdio.h>
 int main()
 {
 	int age;
 	char gender,ms;
 	printf("\n\n\t司机的详细信息\n\n");
 	printf("\n\t司机的婚姻状况（Y/N）：");
 	scanf("%c",&ms);
 	getchar();//没有此处，程序不能正常运行 
 	printf("\n\t司机的性别（M/F）:");
	scanf("%c",&gender);
	getchar(); //调用getchar()将回车符取走，以便后续步骤进行 ！！！ 
	printf("\n\t司机的年龄：");
	scanf("%d",&age);
	if(ms=='Y')
	printf("\n\t该司机可以投保");
	else if(gender=='M'&&age>30)
	printf("\n\t该司机可以投保");
	else if(gender=='F'&&age>25)
	printf("\n\t该司机可以投保");
	else
	printf("\n\t该司机不可以投保");
	return 0;
} 
