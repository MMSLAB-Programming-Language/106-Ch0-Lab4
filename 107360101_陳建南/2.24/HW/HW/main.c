#include<stdio.h>
#include<stdlib.h>


int main(void)

{
	int a;
	printf("�п�J���\n");
	printf("��J����Ƭ��G");
	scanf_s("%d", &a);
	if ((a % 2)==0)
	{
		printf("�����%d�O����\n", a);
	}
	else
	{
		printf("�����%d�O�_��\n", a);
	}
	system("pause");
	return 0;
}
