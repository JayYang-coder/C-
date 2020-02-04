# include<stdio.h>
int main()
{
	printf("请从以下选择一个数：\n \t1\t2\t3\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case 1:printf("\t唱一首情歌！~8~");break;
	case 2:printf("\t大声说出你喜欢的人的名字！*……*");break;
	case 3:printf("\t自选一个大冒险或真心话！#||#");break;
	default:printf("\t你输入的数字不在服务范围内？？？");break;
    }
	return 0; 
}
