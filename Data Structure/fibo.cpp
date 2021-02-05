#pragma waring(disable:4996)
#include <stdio.h>
#include <time.h>
#define MAX_LENGTH (int)(61)

unsigned long long recursive_fibo(unsigned int n);
unsigned long long iterative_fibo(unsigned int n);

int main()
{
	unsigned int length;
	double begin, end;
	double t1, t2;
	unsigned long long val;

	
}

unsigned long long recursive_fibo(unsigned int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return recursive_fibo(n - 1) + recursive_fibo(n - 2);
}

unsigned long long iterative_fibo(unsigned int n)
{
	unsigned long long previous = 0;
	unsigned long long current = 1;
	unsigned long long next = 1;
	
	if (n == 0) return 0;
	for (int i = 1; i < n;i++)
	{
		next = previous + current;
		previous = current;
		current = next;
	}
	return current;
}