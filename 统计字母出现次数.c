#include<stdio.h>
#define N 100
#include<string.h>
int main()
{
	char s[N],*p,c;
	int k,num[26]={0};
	printf("������Ӣ���ı���\n");
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
		p++;//�������ָ������ͳ�� 
	}
	printf("ͳ�ƽ����\n");
	for(k=0;k<26;k++)
	if(num[k]!=0)//ȷ��������Ǵ��ڵ���ĸ 
	{
		c='a'+k;
		printf("%c:%d\n",c,num[k]);
	}
	return 0;
}

