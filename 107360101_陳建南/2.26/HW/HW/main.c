#include<stdio.h>
#include<stdlib.h>


int main(void)

{
	int a,b;
	printf("�п�J���\n");
	printf("��J����Ƭ��G");
	scanf_s("%d%d", &a,&b);
	if ((a % b) == 0 && (b % a) == 0)
	{
		printf("%d�O%d������\n", a,b);
	}
	else if((a % b) != 0 )
	{
		printf("%d���O%d������\n", a,b);
	}
	
	system("pause");
	return 0;
}