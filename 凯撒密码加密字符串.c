#include<stdio.h>
int main()
{
	char s[100];
	char c[100];
	int k,i;
	printf("Please input secret key:");
	scanf("%d",&k);
	printf("Please input plaintext:");
	getchar();
	gets(s);//接受明文
	for(i=0;s[i]!='\0';i++)
	 {
	 if(s[i]>='a'&&s[i]<='z')
	 c[i]=(s[i]+k)>'z'?s[i]+k-26:s[i]+k; 
	 else if(s[i]>'A'&&s[i]<'Z')
	 c[i]=(s[i]+k)>'Z'?s[i]+k-26:s[i]+k;
	 else c[i]=s[i];	
	 }
	 c[i]='\0';//构造字符串必须 
	 printf("The cipherttext is:\n%s\n",c);
	 return 0;
}
