#include<stdio.h>
#include<stdlib.h>


int main(void)

{
	int a, b, c;
	printf("�п�J�T�Ӿ��\n");
	printf("�T�Ӿ�Ƥ��O���G");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b &&  a>c)
	{
		printf("�̤j����ƬO%d\n",a);
	}
	if (b > a&& b > c)
	{
		printf("�̤j����ƬO%d\n",b);
	}
	if (c > a&& c > b)
	{
		printf("�̤j����ƬO%d\n",c);
	}
	if (a < b&& a < c)
	{
		printf("�̤p����ƬO%d\n", a);
	}
	if (b < a&& b < c)
	{
		printf("�̤p����ƬO%d\n", b);
	}
	if (c < a&& c < b)
	{
		printf("�̤p����ƬO%d\n", c);
	}
	system("pause"); 
	return 0;
}
