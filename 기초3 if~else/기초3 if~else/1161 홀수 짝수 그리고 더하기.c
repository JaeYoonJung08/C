#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a , b;
	scanf("%d %d", &a, &b);

	if (a % 2 == 0)
	{
		printf("¦��");
		if (b % 2 == 0)
		{
			printf("+¦��=");
			if ((a + b) % 2 == 0)
			{
				printf("¦��");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("Ȧ��");
			}
		}
		else if (b % 2 == 1)
		{
			printf("+Ȧ��=");
			if ((a + b) % 2 == 0)
			{
				printf("¦��");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("Ȧ��");
			}
		}
	}
	else if (a % 2 == 1)
	{
		printf("Ȧ��");
		if (b % 2 == 0)
		{
			printf("+¦��=");
			if ((a + b) % 2 == 0)
			{
				printf("¦��");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("Ȧ��");
			}
		}
		else if (b % 2 == 1)
		{
			printf("+Ȧ��=");
			if ((a + b) % 2 == 0)
			{
				printf("¦��");
			}
			else if ((a + b) % 2 == 1)
			{
				printf("Ȧ��");
			}
		}
	}
}