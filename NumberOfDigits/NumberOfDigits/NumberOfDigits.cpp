//==========================================================
//	゛整数の桁数
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sscanf(),scanf(),printf()
// 関数プロトタイプ
int NumberOfDigits(int num);
void calcDigit(int num);

int main(int argc, char* argv[])
{
	int num;
	if (argc >= 2) {
		sscanf(argv[1], "%d", &num);
		calcDigit(num);
	}
	else {
		while (true) {
			do {
				printf("正の整数:");
				scanf("%d", &num);
			} while (num <= 0);
			calcDigit(num);
		}
	}
	return 0;
}
void calcDigit(int num)
{
	int digit = NumberOfDigits(num);
	printf("%dの桁数は %d\n", num, digit);
}

int NumberOfDigits(int num)
{
	// ここをコーディングしてください。
	int digit = 0;

	while (num != 0) {
		num = num / 10;
		++digit;
	}
	return digit;
}