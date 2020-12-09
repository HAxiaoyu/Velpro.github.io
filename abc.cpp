#include <stdio.h>

int main()   
{
int a, b, c, n;
	scanf("%d", &n);
	for (a = 0; a < 10; a++)
		for (b = 0; b < 10; b++)
			for (c = 0; c < 10; c++)
				if (101 * a + 101 * c + 20 * b == n)
					printf("%d %d %d\n", a, b, c);
	return 0;
}
