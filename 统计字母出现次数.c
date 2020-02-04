#include<stdio.h>
#define N 100
#include<string.h>
int main()
{
	char s[N],*p,c;
	int k,num[26]={0};
	printf("请输入英语文本：\n");
	gets(s);
	strlwr(s); 
	p=s;
	while(*p!='\0')
	{
		if(*p>='a'&&*p<='z')
		{
			k=*p-'a';
			num[k]++;
		}
		p++;//依次向后指，遍历统计 
	}
	printf("统计结果：\n");
	for(k=0;k<26;k++)
	if(num[k]!=0)//确保输出的是存在的字母 
	{
		c='a'+k;
		printf("%c:%d\n",c,num[k]);
	}
	return 0;
}

