#include<stdio.h>

int sum(int a, int b);

int main(void) {
	int s = sum(1, 2);
	printf("%d", s); 
	return 0;
}

int sum(int a, int b)
{
	return a + b;
}