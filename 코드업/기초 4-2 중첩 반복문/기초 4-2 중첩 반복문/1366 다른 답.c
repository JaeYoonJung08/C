#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int n , i , j;
	scanf("%d", &n);
	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= n; j++)
		{                                                  //  i == j , ���ʺ��� //i == n - j + 1 ������ ���� 
			if (j == 1 || i == 1 || i == n || j == n || i == j || i == n - j + 1 || n / 2 + 1 == i || n / 2 + 1 == j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
