#include<stdio.h>
#include<stdlib.h>


int main(void)

{
	int a,b;
	printf("請輸入整數\n");
	printf("輸入的整數為：");
	scanf_s("%d%d", &a,&b);
	if ((a % b) == 0 && (b % a) == 0)
	{
		printf("%d是%d的倍數\n", a,b);
	}
	else if((a % b) != 0 )
	{
		printf("%d不是%d的倍數\n", a,b);
	}
	
	system("pause");
	return 0;
}