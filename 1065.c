//�Ѽ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int result(int number) { //�־��� number�� �Ѽ����� �Ǵ��ϴ� �Լ�
	int a[4] = { 0 }; //�� �ڸ����� �ǹ� a[3]�� õ���ڸ�, a[2]�� ���� �ڸ�, a[1]�� �����ڸ�, a[0]�� �����ڸ�
	a[3] = number / 1000;
	number = number % 1000;
	a[2] = number / 100;
	number = number % 100;
	a[1] = number / 10;
	number = number % 10;
	a[0] = number;
	int d[3] = { 0 };
	d[0] = a[3] - a[2];
	d[1] = a[2] - a[1];
	d[2] = a[1] - a[0];
	if (a[3] == 0 && a[2] == 0 && a[1] == 0) return 1; //1�� �ڸ�
	else if(a[3] == 0 && a[2] == 0) { //10�� �ڸ�
		return 1;
	}
	else if (a[3] == 0) { //���� �ڸ�
		if (d[1] == d[2]) return 1;
	}
	else {
		if (d[0] == d[1] && d[1] == d[2]) return 1;
	}
	return 0;
}

int main() {
	int num, i, j;
	int count = 0;

	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		if (result(i) == 1) count++; //�Ѽ��� ��� ���� �ø���
	}
	printf("%d", count);
}