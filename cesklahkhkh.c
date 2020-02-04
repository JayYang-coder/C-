#include<stdio.h>
int main() 
{
  double a[2];
  char *p=a;char*q=p+1;
  printf("%d",q-p);
  return 0;
}
