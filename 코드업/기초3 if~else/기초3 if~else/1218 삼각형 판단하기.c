#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, a1, b1, c1;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		printf("���ﰢ��");
		return;
	}
	else if ( (a == b  || b == c) && a + b > c)
	{
		printf("�̵�ﰢ��");
		return;
	}

	a1 = a * a;
	b1 = b * b;
	c1 = c * c;
	if (a1 + b1 == c1)
	{
		printf("�����ﰢ��");
	}
	else if (!(a < b && b < c) || a + b <= c)
	{
		printf("�ﰢ���ƴ�");
	}
	else
	{
		printf("�ﰢ��");
	}
	

}