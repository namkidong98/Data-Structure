//행렬의 최댓값 계산
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j;
	int matrix[9][9] = { 0 };
	int max = -1;
	int row, col;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			scanf("%d", &matrix[i][j]);
			if (matrix[i][j] > max) {
				max = matrix[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}
	printf("%d\n%d %d", max, row, col);
}