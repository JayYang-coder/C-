# include <stdio.h>
int main()
 {
 	int h1,h2,m1,m2,h,m;
 	printf("����������ʱ�䣺");
	scanf("%d%d%d%d",&h1,  &m1,&h2,&m2);
	if(h1>=h2)
	h=h1-h2,m=m1-m2;
	else
	h=h2-h1,m=m2-m1;
	if(m<0){
	m=60+m;
	h--;}
	printf("ʱ�����%dСʱ%d��",h,m);
	return 0; 
  } 
