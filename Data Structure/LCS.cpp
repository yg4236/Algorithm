//201720744_¿Ã¿±±‘ Week12
#include <iostream>
#include <string.h>

#define LEN 9
#define max(a,b) (a>b)?a:b 
using namespace std;
int C[LEN][LEN];


void get_len_LCS(char* X, char* Y)
{
	//init
	for (int i = 0;i <= LEN;i++) {
		C[i][0] = 0;
	}
	for (int j = 0;j <= LEN;j++) {
		C[0][j] = 0;
	}
	//computing
	for (int j = 1;j < LEN;j++) {
		for (int i = 1;i < LEN;i++) {
			if (X[i-1] == Y[j-1]) C[j][i] = C[j - 1][i - 1] + 1;
			else C[j][i] = max(C[j][i - 1], C[j - 1][i]);
		}
	}

}
void get_LCS(char* X, char* Y)
{
	int i = LEN-1, j = LEN-1,k=0;
	char ans[8];
	while (i > 0 && j > 0) {
		if (C[i][j] == C[i][j - 1]) j--;
		else if (C[i][j] == C[i - 1][j]) i--;
		else if (C[i][j] - 1 == C[i - 1][j - 1]) 
		{
			i--; j--;
			ans[k++] = X[j];
		}
	}
	for (i = k - 1;i >= 0;i--)
	{
		cout << ans[i];
	}
}
int main()
{
	char X[LEN], Y[LEN];//random assign eight-length array
	
	cout << "Input #1: ";
	cin >> X;
	cout << "Input #2: ";
	cin >> Y;
	get_len_LCS(X, Y);
	cout << "Longest Common Subsequence: ";
	get_LCS(X, Y);
	
	return 0;
}


