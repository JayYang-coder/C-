# include <stdio.h>
int main(void)
{
    char str[20];  /*����һ����󳤶�Ϊ19, ĩβ��'\0'���ַ��������洢�ַ���*/
    printf("������һ���ַ���:");
    fgets(str, 7, stdin);  /*��������stdin�����뻺�����ж�ȡ7���ַ����ַ�����str��*/
    printf("%s\n", str);
    return 0;
}

