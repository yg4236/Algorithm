#pragma warning(disable:4996)
#include <stdio.h>

void hanoi(int n, char start, char work, char target);

int main()
{
	int n;
	printf("Number of disk. >");
	scanf("%d", &n);

	hanoi(n, 'A', 'B', 'C');//A->C

	return 0;
}
void hanoi(int n, char start, char work, char target)
{
	if (n == 1)
	{
		printf("move object #%d from %c to %c\n", n, start, target);
	}
	else
	{
		hanoi(n - 1, start, target, work);
		printf("move object #%d from %c to %c\n", n, start, target);
		hanoi(n - 1, work, start, target);
	}
 }