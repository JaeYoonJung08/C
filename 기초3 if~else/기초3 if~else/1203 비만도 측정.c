#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int grade;
	scanf("%d", &grade);

	if (grade <= 10)
	{
		printf("����");
	}
	else if (grade <= 20)
	{
		printf("��ü��");
	}
	else
	{
		printf("��");
	}


}