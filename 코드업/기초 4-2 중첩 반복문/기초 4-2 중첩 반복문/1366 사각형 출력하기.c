#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, number, second, s;
	int first;//(1) ���� �� j�� 1�϶�
	int left_em;//(2) ����`
	int star; //(3) ���� �� start
	int middle_em; //(4)�߰� ���� ����
	int middle_star; //(5) �߰�   ���� start
	int middle_right_em;//(6) �߰� ������ ����
	int middle_right_star;//(7) �߰� ������ start
	int right_em; //(8) ������ ���� 
	int right_star;
	scanf("%d", &number);

		for (j = 1; j <= number; j++)
		{
			printf("*");
		}
		printf("\n");
	

	for (i = 1; i < number / 2; i++)
	{
		
		//(1)
		for (first = 1; first <= 1; first++)//���� j�� 1�� ��
		{
			printf("*");
		}
		//(2)
		for (left_em = 2; left_em <= i; left_em++)//���� ����
		{
			printf(" ");
		}

		//(3)���� �� star 
		for (star = number / 2; star <= number / 2; star++)
		{
			printf("*");
		}

		//(4) �߰� ���� ���� 
		for (middle_em = i + 1; middle_em < number / 2; middle_em++)
		{
			printf(" ");
		}

		//(5) �߰� ���� star
		for (middle_star = number / 2; middle_star <= number / 2; middle_star++)
		{
			printf("*");
		}

		//(6) �߰� ������ ����
		for (middle_right_em = number / 2; middle_right_em > i + 1; middle_right_em--)
		{
			printf(" ");
		}

		//(7) �߰� ������ star
		for (middle_right_star = number - 1; middle_right_star <= number - 1; middle_right_star++)
		{
			printf("*");
		}

		//(8) �߰� ������ ����
		for (right_em = number / 2 + 1; right_em < number / 2 + i; right_em++)
		{
			printf(" ");
		}

		//(9) ������ �� star
		for (right_star = number / 2; right_star <= number / 2; right_star++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (s = 1; s <= number; s++)
	{
		printf("*");
	}
	printf("\n");

	//printf("%d", i);
	//(i = 1; i < number / 2; i++)
	for (i = number / 2  - 1 ; i > 0; i--)
	{

		//(1)
		for (first = 1; first <= 1; first++)//���� j�� 1�� ��
		{
			printf("*");
		}
		//(2)
		for (left_em = 2; left_em <= i; left_em++)//���� ����
		{
			printf(" ");
		}

		//(3)���� �� star 
		for (star = number / 2; star <= number / 2; star++)
		{
			printf("*");
		}
		
		//(4) �߰� ���� ���� 
		for (middle_em = i + 1; middle_em < number / 2; middle_em++)
		{
			printf(" ");
		}

		//(5) �߰� ���� star
		for (middle_star = number / 2; middle_star <= number / 2; middle_star++)
		{
			printf("*");
		}

		//(6) �߰� ������ ����
		for (middle_right_em = number / 2; middle_right_em > i + 1; middle_right_em--)
		{
			printf(" ");
		}

		//(7) �߰� ������ star
		for (middle_right_star = number - 1; middle_right_star <= number - 1; middle_right_star++)
		{
			printf("*");
		}

		//(8) �߰� ������ ����
		for (right_em = number / 2 + 1; right_em < number / 2 + i; right_em++)
		{
			printf(" ");
		}

		//(9) ������ �� star
		for (right_star = number / 2; right_star <= number / 2; right_star++)
		{
			printf("*");
		}
		//printf("\n");
		printf("\n");
	}

	for (j = 1; j <= number; j++)
	{
		printf("*");
	}

}
