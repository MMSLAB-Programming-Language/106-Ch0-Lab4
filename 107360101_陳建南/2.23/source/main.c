#include<stdio.h>
#include<stdlib.h>


int main(void)

{
	int a, b, c;
	printf("叫块俱计\n");
	printf("俱计だ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b &&  a>c)
	{
		printf("程俱计琌%d\n",a);
	}
	if (b > a&& b > c)
	{
		printf("程俱计琌%d\n",b);
	}
	if (c > a&& c > b)
	{
		printf("程俱计琌%d\n",c);
	}
	if (a < b&& a < c)
	{
		printf("程俱计琌%d\n", a);
	}
	if (b < a&& b < c)
	{
		printf("程俱计琌%d\n", b);
	}
	if (c < a&& c < b)
	{
		printf("程俱计琌%d\n", c);
	}
	system("pause"); 
	return 0;
}
