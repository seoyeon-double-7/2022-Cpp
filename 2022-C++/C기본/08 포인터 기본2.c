﻿#include<stdio.h>

int main(void)
{
	int num1 = 15, num2 = 30, num3 = 45;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	//ptr1이 num2를 가리킴
	ptr1 = ptr2;
	//ptr2가 num3를 가리킴
	ptr2 = ptr3;

	*ptr3 *= 2;	//num3는 90(45*2)
	*ptr1 += *ptr3;	//num2는 120(30+90)
	*ptr2 *= 2;	//num3는 180(90*2)

	return 0;
}