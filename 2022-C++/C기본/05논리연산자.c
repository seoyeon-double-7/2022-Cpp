#include<stdio.h>

int main(void)
{
	int a=0, b=0, c = 0;
	if (++a || ++b && ++c)
	{
		printf("참");
	}
	printf("%d %d %d\n",a, b, c);
}