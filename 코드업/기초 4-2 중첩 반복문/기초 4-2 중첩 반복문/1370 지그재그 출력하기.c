#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int h, i, j, k , e, s, q;
	scanf("%d %d", &h, &k);

	for ( q = 0; q < k; q++)
	{
		for (i = 1; i <= h; i++)
		{
			for (e = h + 1; e <= h + i - 1; e++)
			{
				printf(" ");
			}
			
				printf("*");
			
			printf("\n");

			
		}
		for (i = h; i > 1 ; i--)
		{

			//3 2 
			//0 1 (1) 

			//��ü�� �����ϸ� ���� �κе� �����ϸ鼭 �ڵ带 ¥�ִ� ���� ����?
			// ���� �κ��� �۾����� i�� �̿� 
			for (s = 0  ; s <  i - 2  ; s++)
			{
				printf(" ");
			}
			
				printf("*");
			
			
			printf("\n");
		}
		//printf("\n");
	}
	
}
