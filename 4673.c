//���� �ѹ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LIMIT 10000


int main() {
	int number[LIMIT + 1] = { 0 }; //1���� 10000������ ���� 0�� ���� --> �����ѹ��� 0���� ���� �ƴѰ� 1�� ����

	int n, d_n, i; //n�� ������, d_n�� n�� n�� �� �ڸ����� ���� ��
	for(i = 1; i <= LIMIT; i++) { //1���� 10000���� ����
		n = i;
		d_n = n;
		do {
			d_n += n % 10;
			n = (n - (n % 10)) / 10;
		} while (n != 0);
		if(d_n <= LIMIT) number[d_n] = 1;
	}
	for (i = 1; i <= LIMIT; i++) {
		if (number[i] == 0) printf("%d\n", i);
	}
}