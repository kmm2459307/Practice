//==========================================================
//	�s���~�b�h��\������ �|�u
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintPyramid_UpsideDown(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("���i�̃s���~�b�h�ł���? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintPyramid_UpsideDown(n);
	}
	return 0;
}

void PrintPyramid_UpsideDown(int n)
{
	// �������R�[�f�B���O���Ă��������B
	for (int i = n; i >= 1; i--) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i + (i - 1); j++) {
			printf("%d", n - (i - 1));
		}
		printf("\n");
	}
}