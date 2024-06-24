//=========================================================
//	�n�m�C�̓��@��@
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()

typedef enum {
	A = 1,
	B = 2,
	C = 3,
} POS;

// �֐��v���g�^�C�v
void move(int no, POS from, POS to);

int main()
{
	while (true) {
		int n;
		do {
			printf("�n�m�C�̓�\a�~�Ղ̐�:");
			scanf("%d", &n);
		} while (n < 1);

		move(n, A, C);
	}
	return 0;
}

void move(int no, POS from, POS to)
{
	POS tmp = (POS)((A + B + C) - from - to);
	if (no > 1) {
		move(no - 1, from, tmp);
	}
	const char* strFrom = getPollName(from);
	const char* strTo = getPollName(to);
	printf("�~��[%d]�� %s������ %s���ֈړ�\n", no, strFrom, strTo);

	const char *getPollName(POS poll);
	{
		if (poll == A) {
			return "A";
		}
		else if (poll == B) {
			return "B";
		}
		else {
			return "C";
		}
	}

	const char *getPollName(POS poll);
	{
		const char* getPollName[] = { "", "A", "B", "C" };

	}
	if (no > 1) {
		move(no - 1, tmp, to);
	}
}