#include<stdio.h>
int main()
{
	const int number=10;//����Ĵ�С 
	int count[number];//��������
	int x,i;
	for(i=0;i<number;i++){  //��ʼ������
	count[i]=0; 
 } 
    printf("plese input the number of 0--9 :\n"); 
    scanf("%d",&x);
    while(x!=-1){
    	if(x>=0&&x<=9){
    	count[x]++; //����������� 
    }
	scanf("%d",&x);
}
    for(i=0;i<number;i++){  //����������� 
    	printf("%d have show up for %d times\n",i,count[i]);
    	//return 0; (���ܷ���ѭ�����������������)
	}
	return 0;
}
