#include <stdio.h>

int main()
{
	// plus
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);

	// minus
	int a1, b1;

	scanf("%d%d", &a1, &b1);
	printf("%d - %d = %d\n", a1, b1, a1 - b1);

	// mul
	int a2, b2;

	scanf("%d%d", &a2, &b2);
	printf("%d * %d = %d\n", a2, b2, a2 * b2);

	// div
	int a3, b3;

	scanf("%d%d", &a3, &b3);
	printf("%d / %d = %d\n", a3, b3, a3 / b3);

	// mod
	int a4, b4;

	scanf("%d%d", &a4, &b4);
	printf("%d %% %d = %d\n", a4, b4, a4 % b4);

	// ±¸±¸´Ü
	int N, i;
	scanf_s("%d", &N);
	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", N, i, N * i);
	}

	return 0;
}