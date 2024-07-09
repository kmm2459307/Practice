//==========================================================
//	ピラミッドを表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintPyramid(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("何段のピラミッドですか? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintPyramid(n);
	}
	return 0;
}

void PrintPyramid(int n)
{
	// ここをコーディングしてください。
	for (int i = 1; i <= n; i++) {
		for (int s = n - i; s > 0; s--) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}