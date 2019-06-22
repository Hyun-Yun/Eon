#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Jugement(int xy0, int xy1, int xy2, int xy3)
{
	int i, j, overlap = 0;

	if ((xy1 - xy0) >= (xy3 - xy2))
	{
		for (i = xy0; i <= xy1; i++)
		{
			for (j = xy2; j <= xy3; j++)
			{
				if (i == j)
				{
					overlap = 1;
				}
			}
		}
	}
	else
	{
		for (i = xy2; i <= xy3; i++)
		{
			for (j = xy0; j <= xy1; j++)
			{
				if (i == xy1 || i == xy0)
				{
					overlap = 1;
				}
			}
		}
	}
	return overlap;
}

int main(void)
{
	int x1[2], y1[2], x2[2], y2[2], X = 0, Y = 0;

	printf("첫번 째 사각형 좌표 : ");
	scanf_s("%d %d %d %d", &x1[0], &y1[0], &x1[1], &y1[1]);

	printf("\n두번 째 사각형 좌표 : ");
	scanf_s("%d %d %d %d", &x2[0], &y2[0], &x2[1], &y2[1]);

	X = Jugement(x1[0], x1[1], x2[0], x2[1]);
	Y = Jugement(y1[0], y1[1], y2[0], y2[1]);

	if ((X * Y) == 1)
	{
		printf("\nOverlap");
	}
	else
	{
		printf("\nNo overlap");
	}
	return 0;
}