#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int  i, j, e, first, second;
	int x, y, h ,w, n ,stick , l, temp, d;
	int box[21][21] = { 0 };

	scanf("%d %d", &h, &w);
	for ( i = 1; i <= h; i++) // �迭 �����
	{
		for ( j = 1; j <= w; j++)
		{
			box[i][j] = 0;
		}
	}

	scanf("%d", &n);//������ ���� 
	for ( stick = 0; stick < n; stick++)//���� ���� n��ŭ �־��ֱ�
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);//���� ����
		if (d == 1)//���� ���� �Ǻ�
		{
			for (e = 1; e <= l; e++)//���� ���� ��ŭ ������
			{
				for (first = x ; first < x + l; first++) // x,y���� ��ŭ �־��ֱ�
				{
					box[first][y] = 1;
					
				}
			}
		}
		else if(d == 0)
		{
			
			//for (e = 1; e <= l; e++)//���� ���� ��ŭ ������
			//{
				for ( first = x; first <= x ; first++) // x,y���� ��ŭ �־��ֱ�
				{
					for ( second = 0; second < l; second++)
					{
						box[first][y++] = 1;
						
						//printf("%d ", second);
					}
				}
			//}
		}
		
	}


	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= w; j++)
		{
			printf("%d ", box[i][j]);
		}
		printf("\n");
	}


}