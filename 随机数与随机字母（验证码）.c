#include<stdio.h>
#include<time.h>
int main()
{
	
	int i=1;
	srand((unsigned)time(NULL));
	printf("���������ĸΪ��");
	while(i<=4){
	printf("%c",rand()%26+'a');
	i++;	
	}
	return 0;
 } 
