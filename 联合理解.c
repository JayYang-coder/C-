#include<stdio.h>
typedef union{
	int i;
	char ch[sizeof(int)];
}CHI;
int main()
{
	CHI chi;
    int i;
    chi.i=1234;//16½øÖÆÎª04D2 
    for(i=0;i<sizeof(int);i++)
    {
    	printf("%02hhx",chi.ch[i]);
	}
	printf("\n");
	return 0;
}

