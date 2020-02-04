#include<stdio.h>
struct date{
	int month;
	int day;
	int year;
};

int main()
{
	struct date today={07,31,2019};
    struct date thismonth={.month=7,.year=2018};
    printf("tody's date is %i-%i-%i.\n",
	today.year,today.month,today.day);
	printf("this month is %i-%i-%i.\n",
	thismonth.year,thismonth.month,thismonth.day);
	return 0;
}
