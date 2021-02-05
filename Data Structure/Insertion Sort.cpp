#pragma warning(disable: 4996)

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>

#define MAX2(a, b) 	((a) > (b) ? (a) : (b))
#define MIN2(a, b) 	((a) < (b) ? (a) : (b))
#define ABS(x) 		((x) < 0 ? -(x) : (x))

#define MAX_N 100

typedef struct {
	char name[21];
	char phone_number[24];
} contact_t;

int main() {
	int N;
	int i;
	contact_t contacts[MAX_N];

	scanf("%d", &N);

	for (i = 0; i < N; i += 1) {
		scanf("%s %s", contacts[i].name, contacts[i].phone_number);
	}

	/****** Your Code ********/
	int j;
	int t;
	char* temp;
	for (i = 1;i < N;i++)
	{
		for (j = 0;j < i;j++)
		{
			if (contacts[j].name > contacts[i].name)
			{
				strcpy(temp, contacts[i].name);
				for (t = i - 1;t >= j;t--)
				{
					strcpy(contacts[t + 1].name, contacts[t].name);
				}
				strcpy(contacts[t + 1].name, temp);
			}
		}
	}
	for (i = 0;i < N;i++)
	{
		if (strcmp(contacts[i].name, contacts[i + 1].name))
		{
			if (contacts[i].phone_number > contacts[i + 1].phone_number)
			{
				strcpy(temp, contacts[i + 1].phone_number);
				strcpy(contacts[i].phone_number, contacts[i + 1].phone_number);
				strcpy(contacts[i + 1].phone_number, temp);
			}
		}
	}
	/*************************/

	for (i = 0; i < N; i += 1) {
		printf("%s %s\n", contacts[i].name, contacts[i].phone_number);
	}
	return 0;
}