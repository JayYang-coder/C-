#include<stdio.h>
#define N 20
#include <stdlib.h>
int main()
{
	FILE *fp1,*fp2;
	int i,j,k;
	char name[N],id[N],bd[N];
	fp1=fopen("e:\\编程数据\\书本自学\\idcard.txt","r");
	if(fp1==NULL)
	{
		puts("can't open idcard.txt");
		exit(0);
	}
	fp2=fopen("e:\\编程数据\\书本自学\\birthday.txt","w");
	if(fp2==NULL)
	{
		puts("can't open birthday.txt");
		exit(0);
	} 
	 while(!feof(fp1))
	 {
	 	fgets(name,N,fp1);
	 	fgets(id,N,fp1);
	 	for(i=6,j=0;i<14;i++,j++)
	 	bd[j]=id[i];
	 	bd[j]='\0';
	 	fputs(name,fp2);
	 	fputs(bd,fp2);
	 	fputc('\n',fp2);
	 }
	 fclose(fp1);
	 fclose(fp2);
	 return 0;
 } 
